grammar myDsl;

dsl: command* EOF;

command: loadImageCommand | showImageCommand | assignementCommand | textRecognitionCommand | printTextCommand | loopOperation;

loadImageCommand: 'load' VARIABLE path=STRING ;
showImageCommand: 'show' VARIABLE;
textRecognitionCommand: 'textRecognition' '(' source ',' dest ')';
printTextCommand: 'print' VARIABLE;

assignementCommand: VARIABLE '=' (operation | arrayDeclaration || arrayElement);
operation: (operationType  '('| imageManipulationType) (VARIABLE |  operation ) ')'| arithmeticOperation | loopOperation;

operationType: blurType blurOpts=blurOptions?  | 'binarization' | thresholdType thresholdOpts=maxValue? | 'countors';
blurType: 'gaussianBlur' | 'bilateralBlur' | 'medianBlur';
blurOptions: '(' size1=INT ',' size2=INT ')' | '(' ksize=INT ')' | '(' ksize=INT ',' sigma=INT ')';

arithmeticOperation
        : '(' arithmeticOperation ')'
        | arithmeticOperation multOp arithmeticOperation
        | arithmeticOperation (addOp | subOp) arithmeticOperation
        | VARIABLE
        ;
multOp: '*';
addOp: '+';
subOp: '-';
source: VARIABLE;
dest: VARIABLE;

imageManipulationType: resizeOperation | rotateOperation;
resizeOperation : 'resize' '(' width=INT ',' height=INT ',';
rotateOperation: 'rotate' '(' degrees=INT ',';
arrayDeclaration: '[' (VARIABLE (',' VARIABLE)*)? ']';
arrayElement: VARIABLE '!!' INT;
show: 'show';
loopOperation: 'loop' '(' VARIABLE ',' (operationType | imageManipulationType | show) ')';

maxValue: '(' INT ')';
thresholdType: ('binary_threshold' | 'binary_inv_threshold' | 'otsu_threshold' | 'otsu_binary_inv_threshold') ; 

options: '(' size=INT ',' sigma=FLOAT ')' | '(' size=INT ')';

STRING: '"' (ESC | .)*? '"';
fragment ESC: '\\' . ;

INT: [0-9]+;
FLOAT: [0-9]+ '.' [0-9]+;
WS: [ \t\r\n]+ -> skip;
VARIABLE: [a-zA-Z] [a-zA-Z0-9]* ;