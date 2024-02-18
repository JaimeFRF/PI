grammar myDsl;

dsl: command* EOF;

command: loadImageCommand | showImageCommand | assignementCommand;

loadImageCommand: 'load' VARIABLE 'from' path=STRING ';' ;
showImageCommand: 'show' VARIABLE ';';

assignementCommand: VARIABLE '=' operation ';';
operation: operationType 'on' (VARIABLE | '(' operation ')');
operationType: blurType blurOpts=blurOptions? | 'binarization';
blurType: 'gaussianBlur' | 'bilateralBlur' | 'medianBlur';
blurOptions: 'with size' '(' size1=INT ',' size2=INT ')' | '(' ksize=INT ')' | '(' ksize=INT ',' sigma=INT ')';

options: '(' size=INT ',' sigma=FLOAT ')' | '(' size=INT ')';

STRING: '"' (ESC | .)*? '"';
fragment ESC: '\\' . ;

INT: [0-9]+;
FLOAT: [0-9]+ '.' [0-9]+;
WS: [ \t\r\n]+ -> skip;
VARIABLE: [a-zA-Z] [a-zA-Z0-9]* ;