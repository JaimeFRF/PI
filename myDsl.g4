grammar myDsl;

dsl: command* EOF;

command: loadImageCommand | showImageCommand | blurImageCommand | thresholdImageCommand;

loadImageCommand: 'load' VARIABLE 'from' path=STRING ';' ;
showImageCommand: 'show' VARIABLE ';';

blurImageCommand: VARIABLE '=' blur=blurType blurOpts=blurOptions? 'on' VARIABLE ';';
blurType: 'gaussianBlur' | 'bilateralBlur' | 'medianBlur';
blurOptions: 'with size' '(' size1=INT ',' size2=INT ')' | '(' ksize=INT ')' | '(' ksize=INT ',' sigma=INT ')';

thresholdImageCommand: VARIABLE '=' 'threshold' VARIABLE ';';

options: '(' size=INT ',' sigma=FLOAT ')' | '(' size=INT ')';

STRING: '"' (ESC | .)*? '"';
fragment ESC: '\\' . ;

INT: [0-9]+;
FLOAT: [0-9]+ '.' [0-9]+;
WS: [ \t\r\n]+ -> skip;
VARIABLE: [a-zA-Z] [a-zA-Z0-9]* ;