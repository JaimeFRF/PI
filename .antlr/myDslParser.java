// Generated from /home/jaimefrf/Desktop/PI/myDsl.g4 by ANTLR 4.13.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class myDslParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.13.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, T__14=15, T__15=16, T__16=17, 
		T__17=18, T__18=19, T__19=20, T__20=21, T__21=22, T__22=23, T__23=24, 
		T__24=25, T__25=26, STRING=27, INT=28, FLOAT=29, WS=30, VARIABLE=31;
	public static final int
		RULE_dsl = 0, RULE_command = 1, RULE_loadImageCommand = 2, RULE_showImageCommand = 3, 
		RULE_textRecognitionCommand = 4, RULE_printTextCommand = 5, RULE_assignementCommand = 6, 
		RULE_operation = 7, RULE_operationType = 8, RULE_blurType = 9, RULE_blurOptions = 10, 
		RULE_arithmeticOperation = 11, RULE_multOp = 12, RULE_addOp = 13, RULE_subOp = 14, 
		RULE_source = 15, RULE_dest = 16, RULE_imageManipulationType = 17, RULE_resizeOperation = 18, 
		RULE_rotateOperation = 19, RULE_arrayDeclaration = 20, RULE_arrayElement = 21, 
		RULE_show = 22, RULE_loopOperation = 23, RULE_maxValue = 24, RULE_thresholdType = 25, 
		RULE_options = 26;
	private static String[] makeRuleNames() {
		return new String[] {
			"dsl", "command", "loadImageCommand", "showImageCommand", "textRecognitionCommand", 
			"printTextCommand", "assignementCommand", "operation", "operationType", 
			"blurType", "blurOptions", "arithmeticOperation", "multOp", "addOp", 
			"subOp", "source", "dest", "imageManipulationType", "resizeOperation", 
			"rotateOperation", "arrayDeclaration", "arrayElement", "show", "loopOperation", 
			"maxValue", "thresholdType", "options"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'load'", "'show'", "'textRecognition'", "'('", "','", "')'", "'print'", 
			"'='", "'binarization'", "'countors'", "'gaussianBlur'", "'bilateralBlur'", 
			"'medianBlur'", "'*'", "'+'", "'-'", "'resize'", "'rotate'", "'['", "']'", 
			"'!!'", "'loop'", "'binary_threshold'", "'binary_inv_threshold'", "'otsu_threshold'", 
			"'otsu_binary_inv_threshold'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, "STRING", "INT", "FLOAT", "WS", "VARIABLE"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "myDsl.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public myDslParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DslContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(myDslParser.EOF, 0); }
		public List<CommandContext> command() {
			return getRuleContexts(CommandContext.class);
		}
		public CommandContext command(int i) {
			return getRuleContext(CommandContext.class,i);
		}
		public DslContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dsl; }
	}

	public final DslContext dsl() throws RecognitionException {
		DslContext _localctx = new DslContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_dsl);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(57);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 2151678094L) != 0)) {
				{
				{
				setState(54);
				command();
				}
				}
				setState(59);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(60);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class CommandContext extends ParserRuleContext {
		public LoadImageCommandContext loadImageCommand() {
			return getRuleContext(LoadImageCommandContext.class,0);
		}
		public ShowImageCommandContext showImageCommand() {
			return getRuleContext(ShowImageCommandContext.class,0);
		}
		public AssignementCommandContext assignementCommand() {
			return getRuleContext(AssignementCommandContext.class,0);
		}
		public TextRecognitionCommandContext textRecognitionCommand() {
			return getRuleContext(TextRecognitionCommandContext.class,0);
		}
		public PrintTextCommandContext printTextCommand() {
			return getRuleContext(PrintTextCommandContext.class,0);
		}
		public LoopOperationContext loopOperation() {
			return getRuleContext(LoopOperationContext.class,0);
		}
		public CommandContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_command; }
	}

	public final CommandContext command() throws RecognitionException {
		CommandContext _localctx = new CommandContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_command);
		try {
			setState(68);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__0:
				enterOuterAlt(_localctx, 1);
				{
				setState(62);
				loadImageCommand();
				}
				break;
			case T__1:
				enterOuterAlt(_localctx, 2);
				{
				setState(63);
				showImageCommand();
				}
				break;
			case VARIABLE:
				enterOuterAlt(_localctx, 3);
				{
				setState(64);
				assignementCommand();
				}
				break;
			case T__2:
				enterOuterAlt(_localctx, 4);
				{
				setState(65);
				textRecognitionCommand();
				}
				break;
			case T__6:
				enterOuterAlt(_localctx, 5);
				{
				setState(66);
				printTextCommand();
				}
				break;
			case T__21:
				enterOuterAlt(_localctx, 6);
				{
				setState(67);
				loopOperation();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LoadImageCommandContext extends ParserRuleContext {
		public Token path;
		public TerminalNode VARIABLE() { return getToken(myDslParser.VARIABLE, 0); }
		public TerminalNode STRING() { return getToken(myDslParser.STRING, 0); }
		public LoadImageCommandContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_loadImageCommand; }
	}

	public final LoadImageCommandContext loadImageCommand() throws RecognitionException {
		LoadImageCommandContext _localctx = new LoadImageCommandContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_loadImageCommand);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(70);
			match(T__0);
			setState(71);
			match(VARIABLE);
			setState(72);
			((LoadImageCommandContext)_localctx).path = match(STRING);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ShowImageCommandContext extends ParserRuleContext {
		public TerminalNode VARIABLE() { return getToken(myDslParser.VARIABLE, 0); }
		public ShowImageCommandContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_showImageCommand; }
	}

	public final ShowImageCommandContext showImageCommand() throws RecognitionException {
		ShowImageCommandContext _localctx = new ShowImageCommandContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_showImageCommand);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(74);
			match(T__1);
			setState(75);
			match(VARIABLE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class TextRecognitionCommandContext extends ParserRuleContext {
		public SourceContext source() {
			return getRuleContext(SourceContext.class,0);
		}
		public DestContext dest() {
			return getRuleContext(DestContext.class,0);
		}
		public TextRecognitionCommandContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_textRecognitionCommand; }
	}

	public final TextRecognitionCommandContext textRecognitionCommand() throws RecognitionException {
		TextRecognitionCommandContext _localctx = new TextRecognitionCommandContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_textRecognitionCommand);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(77);
			match(T__2);
			setState(78);
			match(T__3);
			setState(79);
			source();
			setState(80);
			match(T__4);
			setState(81);
			dest();
			setState(82);
			match(T__5);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class PrintTextCommandContext extends ParserRuleContext {
		public TerminalNode VARIABLE() { return getToken(myDslParser.VARIABLE, 0); }
		public PrintTextCommandContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_printTextCommand; }
	}

	public final PrintTextCommandContext printTextCommand() throws RecognitionException {
		PrintTextCommandContext _localctx = new PrintTextCommandContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_printTextCommand);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(84);
			match(T__6);
			setState(85);
			match(VARIABLE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AssignementCommandContext extends ParserRuleContext {
		public TerminalNode VARIABLE() { return getToken(myDslParser.VARIABLE, 0); }
		public OperationContext operation() {
			return getRuleContext(OperationContext.class,0);
		}
		public ArrayDeclarationContext arrayDeclaration() {
			return getRuleContext(ArrayDeclarationContext.class,0);
		}
		public ArrayElementContext arrayElement() {
			return getRuleContext(ArrayElementContext.class,0);
		}
		public AssignementCommandContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_assignementCommand; }
	}

	public final AssignementCommandContext assignementCommand() throws RecognitionException {
		AssignementCommandContext _localctx = new AssignementCommandContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_assignementCommand);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(87);
			match(VARIABLE);
			setState(88);
			match(T__7);
			setState(93);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,2,_ctx) ) {
			case 1:
				{
				setState(89);
				operation();
				}
				break;
			case 2:
				{
				setState(90);
				arrayDeclaration();
				}
				break;
			case 3:
				{
				}
				break;
			case 4:
				{
				setState(92);
				arrayElement();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class OperationContext extends ParserRuleContext {
		public OperationTypeContext operationType() {
			return getRuleContext(OperationTypeContext.class,0);
		}
		public ImageManipulationTypeContext imageManipulationType() {
			return getRuleContext(ImageManipulationTypeContext.class,0);
		}
		public TerminalNode VARIABLE() { return getToken(myDslParser.VARIABLE, 0); }
		public OperationContext operation() {
			return getRuleContext(OperationContext.class,0);
		}
		public ArithmeticOperationContext arithmeticOperation() {
			return getRuleContext(ArithmeticOperationContext.class,0);
		}
		public LoopOperationContext loopOperation() {
			return getRuleContext(LoopOperationContext.class,0);
		}
		public OperationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_operation; }
	}

	public final OperationContext operation() throws RecognitionException {
		OperationContext _localctx = new OperationContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_operation);
		try {
			setState(109);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__8:
			case T__9:
			case T__10:
			case T__11:
			case T__12:
			case T__16:
			case T__17:
			case T__22:
			case T__23:
			case T__24:
			case T__25:
				enterOuterAlt(_localctx, 1);
				{
				setState(99);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case T__8:
				case T__9:
				case T__10:
				case T__11:
				case T__12:
				case T__22:
				case T__23:
				case T__24:
				case T__25:
					{
					setState(95);
					operationType();
					setState(96);
					match(T__3);
					}
					break;
				case T__16:
				case T__17:
					{
					setState(98);
					imageManipulationType();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(103);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
				case 1:
					{
					setState(101);
					match(VARIABLE);
					}
					break;
				case 2:
					{
					setState(102);
					operation();
					}
					break;
				}
				setState(105);
				match(T__5);
				}
				break;
			case T__3:
			case VARIABLE:
				enterOuterAlt(_localctx, 2);
				{
				setState(107);
				arithmeticOperation(0);
				}
				break;
			case T__21:
				enterOuterAlt(_localctx, 3);
				{
				setState(108);
				loopOperation();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class OperationTypeContext extends ParserRuleContext {
		public BlurOptionsContext blurOpts;
		public MaxValueContext thresholdOpts;
		public BlurTypeContext blurType() {
			return getRuleContext(BlurTypeContext.class,0);
		}
		public BlurOptionsContext blurOptions() {
			return getRuleContext(BlurOptionsContext.class,0);
		}
		public ThresholdTypeContext thresholdType() {
			return getRuleContext(ThresholdTypeContext.class,0);
		}
		public MaxValueContext maxValue() {
			return getRuleContext(MaxValueContext.class,0);
		}
		public OperationTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_operationType; }
	}

	public final OperationTypeContext operationType() throws RecognitionException {
		OperationTypeContext _localctx = new OperationTypeContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_operationType);
		try {
			setState(121);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__10:
			case T__11:
			case T__12:
				enterOuterAlt(_localctx, 1);
				{
				setState(111);
				blurType();
				setState(113);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
				case 1:
					{
					setState(112);
					((OperationTypeContext)_localctx).blurOpts = blurOptions();
					}
					break;
				}
				}
				break;
			case T__8:
				enterOuterAlt(_localctx, 2);
				{
				setState(115);
				match(T__8);
				}
				break;
			case T__22:
			case T__23:
			case T__24:
			case T__25:
				enterOuterAlt(_localctx, 3);
				{
				setState(116);
				thresholdType();
				setState(118);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
				case 1:
					{
					setState(117);
					((OperationTypeContext)_localctx).thresholdOpts = maxValue();
					}
					break;
				}
				}
				break;
			case T__9:
				enterOuterAlt(_localctx, 4);
				{
				setState(120);
				match(T__9);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BlurTypeContext extends ParserRuleContext {
		public BlurTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_blurType; }
	}

	public final BlurTypeContext blurType() throws RecognitionException {
		BlurTypeContext _localctx = new BlurTypeContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_blurType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(123);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 14336L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class BlurOptionsContext extends ParserRuleContext {
		public Token size1;
		public Token size2;
		public Token ksize;
		public Token sigma;
		public List<TerminalNode> INT() { return getTokens(myDslParser.INT); }
		public TerminalNode INT(int i) {
			return getToken(myDslParser.INT, i);
		}
		public BlurOptionsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_blurOptions; }
	}

	public final BlurOptionsContext blurOptions() throws RecognitionException {
		BlurOptionsContext _localctx = new BlurOptionsContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_blurOptions);
		try {
			setState(138);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,9,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(125);
				match(T__3);
				setState(126);
				((BlurOptionsContext)_localctx).size1 = match(INT);
				setState(127);
				match(T__4);
				setState(128);
				((BlurOptionsContext)_localctx).size2 = match(INT);
				setState(129);
				match(T__5);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(130);
				match(T__3);
				setState(131);
				((BlurOptionsContext)_localctx).ksize = match(INT);
				setState(132);
				match(T__5);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(133);
				match(T__3);
				setState(134);
				((BlurOptionsContext)_localctx).ksize = match(INT);
				setState(135);
				match(T__4);
				setState(136);
				((BlurOptionsContext)_localctx).sigma = match(INT);
				setState(137);
				match(T__5);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ArithmeticOperationContext extends ParserRuleContext {
		public List<ArithmeticOperationContext> arithmeticOperation() {
			return getRuleContexts(ArithmeticOperationContext.class);
		}
		public ArithmeticOperationContext arithmeticOperation(int i) {
			return getRuleContext(ArithmeticOperationContext.class,i);
		}
		public TerminalNode VARIABLE() { return getToken(myDslParser.VARIABLE, 0); }
		public MultOpContext multOp() {
			return getRuleContext(MultOpContext.class,0);
		}
		public AddOpContext addOp() {
			return getRuleContext(AddOpContext.class,0);
		}
		public SubOpContext subOp() {
			return getRuleContext(SubOpContext.class,0);
		}
		public ArithmeticOperationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arithmeticOperation; }
	}

	public final ArithmeticOperationContext arithmeticOperation() throws RecognitionException {
		return arithmeticOperation(0);
	}

	private ArithmeticOperationContext arithmeticOperation(int _p) throws RecognitionException {
		ParserRuleContext _parentctx = _ctx;
		int _parentState = getState();
		ArithmeticOperationContext _localctx = new ArithmeticOperationContext(_ctx, _parentState);
		ArithmeticOperationContext _prevctx = _localctx;
		int _startState = 22;
		enterRecursionRule(_localctx, 22, RULE_arithmeticOperation, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(146);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__3:
				{
				setState(141);
				match(T__3);
				setState(142);
				arithmeticOperation(0);
				setState(143);
				match(T__5);
				}
				break;
			case VARIABLE:
				{
				setState(145);
				match(VARIABLE);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(161);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(159);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
					case 1:
						{
						_localctx = new ArithmeticOperationContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_arithmeticOperation);
						setState(148);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(149);
						multOp();
						setState(150);
						arithmeticOperation(4);
						}
						break;
					case 2:
						{
						_localctx = new ArithmeticOperationContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_arithmeticOperation);
						setState(152);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(155);
						_errHandler.sync(this);
						switch (_input.LA(1)) {
						case T__14:
							{
							setState(153);
							addOp();
							}
							break;
						case T__15:
							{
							setState(154);
							subOp();
							}
							break;
						default:
							throw new NoViableAltException(this);
						}
						setState(157);
						arithmeticOperation(3);
						}
						break;
					}
					} 
				}
				setState(163);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			unrollRecursionContexts(_parentctx);
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class MultOpContext extends ParserRuleContext {
		public MultOpContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_multOp; }
	}

	public final MultOpContext multOp() throws RecognitionException {
		MultOpContext _localctx = new MultOpContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_multOp);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(164);
			match(T__13);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class AddOpContext extends ParserRuleContext {
		public AddOpContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_addOp; }
	}

	public final AddOpContext addOp() throws RecognitionException {
		AddOpContext _localctx = new AddOpContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_addOp);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(166);
			match(T__14);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SubOpContext extends ParserRuleContext {
		public SubOpContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_subOp; }
	}

	public final SubOpContext subOp() throws RecognitionException {
		SubOpContext _localctx = new SubOpContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_subOp);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(168);
			match(T__15);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class SourceContext extends ParserRuleContext {
		public TerminalNode VARIABLE() { return getToken(myDslParser.VARIABLE, 0); }
		public SourceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_source; }
	}

	public final SourceContext source() throws RecognitionException {
		SourceContext _localctx = new SourceContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_source);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(170);
			match(VARIABLE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class DestContext extends ParserRuleContext {
		public TerminalNode VARIABLE() { return getToken(myDslParser.VARIABLE, 0); }
		public DestContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_dest; }
	}

	public final DestContext dest() throws RecognitionException {
		DestContext _localctx = new DestContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_dest);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(172);
			match(VARIABLE);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ImageManipulationTypeContext extends ParserRuleContext {
		public ResizeOperationContext resizeOperation() {
			return getRuleContext(ResizeOperationContext.class,0);
		}
		public RotateOperationContext rotateOperation() {
			return getRuleContext(RotateOperationContext.class,0);
		}
		public ImageManipulationTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_imageManipulationType; }
	}

	public final ImageManipulationTypeContext imageManipulationType() throws RecognitionException {
		ImageManipulationTypeContext _localctx = new ImageManipulationTypeContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_imageManipulationType);
		try {
			setState(176);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__16:
				enterOuterAlt(_localctx, 1);
				{
				setState(174);
				resizeOperation();
				}
				break;
			case T__17:
				enterOuterAlt(_localctx, 2);
				{
				setState(175);
				rotateOperation();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ResizeOperationContext extends ParserRuleContext {
		public Token width;
		public Token height;
		public List<TerminalNode> INT() { return getTokens(myDslParser.INT); }
		public TerminalNode INT(int i) {
			return getToken(myDslParser.INT, i);
		}
		public ResizeOperationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_resizeOperation; }
	}

	public final ResizeOperationContext resizeOperation() throws RecognitionException {
		ResizeOperationContext _localctx = new ResizeOperationContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_resizeOperation);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(178);
			match(T__16);
			setState(179);
			match(T__3);
			setState(180);
			((ResizeOperationContext)_localctx).width = match(INT);
			setState(181);
			match(T__4);
			setState(182);
			((ResizeOperationContext)_localctx).height = match(INT);
			setState(183);
			match(T__4);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class RotateOperationContext extends ParserRuleContext {
		public Token degrees;
		public TerminalNode INT() { return getToken(myDslParser.INT, 0); }
		public RotateOperationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_rotateOperation; }
	}

	public final RotateOperationContext rotateOperation() throws RecognitionException {
		RotateOperationContext _localctx = new RotateOperationContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_rotateOperation);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(185);
			match(T__17);
			setState(186);
			match(T__3);
			setState(187);
			((RotateOperationContext)_localctx).degrees = match(INT);
			setState(188);
			match(T__4);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ArrayDeclarationContext extends ParserRuleContext {
		public List<TerminalNode> VARIABLE() { return getTokens(myDslParser.VARIABLE); }
		public TerminalNode VARIABLE(int i) {
			return getToken(myDslParser.VARIABLE, i);
		}
		public ArrayDeclarationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arrayDeclaration; }
	}

	public final ArrayDeclarationContext arrayDeclaration() throws RecognitionException {
		ArrayDeclarationContext _localctx = new ArrayDeclarationContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_arrayDeclaration);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(190);
			match(T__18);
			setState(199);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==VARIABLE) {
				{
				setState(191);
				match(VARIABLE);
				setState(196);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while (_la==T__4) {
					{
					{
					setState(192);
					match(T__4);
					setState(193);
					match(VARIABLE);
					}
					}
					setState(198);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
			}

			setState(201);
			match(T__19);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ArrayElementContext extends ParserRuleContext {
		public TerminalNode VARIABLE() { return getToken(myDslParser.VARIABLE, 0); }
		public TerminalNode INT() { return getToken(myDslParser.INT, 0); }
		public ArrayElementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_arrayElement; }
	}

	public final ArrayElementContext arrayElement() throws RecognitionException {
		ArrayElementContext _localctx = new ArrayElementContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_arrayElement);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(203);
			match(VARIABLE);
			setState(204);
			match(T__20);
			setState(205);
			match(INT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ShowContext extends ParserRuleContext {
		public ShowContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_show; }
	}

	public final ShowContext show() throws RecognitionException {
		ShowContext _localctx = new ShowContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_show);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(207);
			match(T__1);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class LoopOperationContext extends ParserRuleContext {
		public TerminalNode VARIABLE() { return getToken(myDslParser.VARIABLE, 0); }
		public OperationTypeContext operationType() {
			return getRuleContext(OperationTypeContext.class,0);
		}
		public ImageManipulationTypeContext imageManipulationType() {
			return getRuleContext(ImageManipulationTypeContext.class,0);
		}
		public ShowContext show() {
			return getRuleContext(ShowContext.class,0);
		}
		public LoopOperationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_loopOperation; }
	}

	public final LoopOperationContext loopOperation() throws RecognitionException {
		LoopOperationContext _localctx = new LoopOperationContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_loopOperation);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(209);
			match(T__21);
			setState(210);
			match(T__3);
			setState(211);
			match(VARIABLE);
			setState(212);
			match(T__4);
			setState(216);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__8:
			case T__9:
			case T__10:
			case T__11:
			case T__12:
			case T__22:
			case T__23:
			case T__24:
			case T__25:
				{
				setState(213);
				operationType();
				}
				break;
			case T__16:
			case T__17:
				{
				setState(214);
				imageManipulationType();
				}
				break;
			case T__1:
				{
				setState(215);
				show();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			setState(218);
			match(T__5);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class MaxValueContext extends ParserRuleContext {
		public TerminalNode INT() { return getToken(myDslParser.INT, 0); }
		public MaxValueContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_maxValue; }
	}

	public final MaxValueContext maxValue() throws RecognitionException {
		MaxValueContext _localctx = new MaxValueContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_maxValue);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(220);
			match(T__3);
			setState(221);
			match(INT);
			setState(222);
			match(T__5);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ThresholdTypeContext extends ParserRuleContext {
		public ThresholdTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_thresholdType; }
	}

	public final ThresholdTypeContext thresholdType() throws RecognitionException {
		ThresholdTypeContext _localctx = new ThresholdTypeContext(_ctx, getState());
		enterRule(_localctx, 50, RULE_thresholdType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(224);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 125829120L) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class OptionsContext extends ParserRuleContext {
		public Token size;
		public Token sigma;
		public TerminalNode INT() { return getToken(myDslParser.INT, 0); }
		public TerminalNode FLOAT() { return getToken(myDslParser.FLOAT, 0); }
		public OptionsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_options; }
	}

	public final OptionsContext options() throws RecognitionException {
		OptionsContext _localctx = new OptionsContext(_ctx, getState());
		enterRule(_localctx, 52, RULE_options);
		try {
			setState(234);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(226);
				match(T__3);
				setState(227);
				((OptionsContext)_localctx).size = match(INT);
				setState(228);
				match(T__4);
				setState(229);
				((OptionsContext)_localctx).sigma = match(FLOAT);
				setState(230);
				match(T__5);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(231);
				match(T__3);
				setState(232);
				((OptionsContext)_localctx).size = match(INT);
				setState(233);
				match(T__5);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public boolean sempred(RuleContext _localctx, int ruleIndex, int predIndex) {
		switch (ruleIndex) {
		case 11:
			return arithmeticOperation_sempred((ArithmeticOperationContext)_localctx, predIndex);
		}
		return true;
	}
	private boolean arithmeticOperation_sempred(ArithmeticOperationContext _localctx, int predIndex) {
		switch (predIndex) {
		case 0:
			return precpred(_ctx, 3);
		case 1:
			return precpred(_ctx, 2);
		}
		return true;
	}

	public static final String _serializedATN =
		"\u0004\u0001\u001f\u00ed\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001"+
		"\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004"+
		"\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007"+
		"\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b"+
		"\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007"+
		"\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007"+
		"\u0012\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002\u0015\u0007"+
		"\u0015\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017\u0002\u0018\u0007"+
		"\u0018\u0002\u0019\u0007\u0019\u0002\u001a\u0007\u001a\u0001\u0000\u0005"+
		"\u00008\b\u0000\n\u0000\f\u0000;\t\u0000\u0001\u0000\u0001\u0000\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0003"+
		"\u0001E\b\u0001\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001"+
		"\u0003\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005\u0001"+
		"\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001"+
		"\u0006\u0003\u0006^\b\u0006\u0001\u0007\u0001\u0007\u0001\u0007\u0001"+
		"\u0007\u0003\u0007d\b\u0007\u0001\u0007\u0001\u0007\u0003\u0007h\b\u0007"+
		"\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0003\u0007n\b\u0007"+
		"\u0001\b\u0001\b\u0003\br\b\b\u0001\b\u0001\b\u0001\b\u0003\bw\b\b\u0001"+
		"\b\u0003\bz\b\b\u0001\t\u0001\t\u0001\n\u0001\n\u0001\n\u0001\n\u0001"+
		"\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0003"+
		"\n\u008b\b\n\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b"+
		"\u0001\u000b\u0003\u000b\u0093\b\u000b\u0001\u000b\u0001\u000b\u0001\u000b"+
		"\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0003\u000b\u009c\b\u000b"+
		"\u0001\u000b\u0001\u000b\u0005\u000b\u00a0\b\u000b\n\u000b\f\u000b\u00a3"+
		"\t\u000b\u0001\f\u0001\f\u0001\r\u0001\r\u0001\u000e\u0001\u000e\u0001"+
		"\u000f\u0001\u000f\u0001\u0010\u0001\u0010\u0001\u0011\u0001\u0011\u0003"+
		"\u0011\u00b1\b\u0011\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001"+
		"\u0012\u0001\u0012\u0001\u0012\u0001\u0013\u0001\u0013\u0001\u0013\u0001"+
		"\u0013\u0001\u0013\u0001\u0014\u0001\u0014\u0001\u0014\u0001\u0014\u0005"+
		"\u0014\u00c3\b\u0014\n\u0014\f\u0014\u00c6\t\u0014\u0003\u0014\u00c8\b"+
		"\u0014\u0001\u0014\u0001\u0014\u0001\u0015\u0001\u0015\u0001\u0015\u0001"+
		"\u0015\u0001\u0016\u0001\u0016\u0001\u0017\u0001\u0017\u0001\u0017\u0001"+
		"\u0017\u0001\u0017\u0001\u0017\u0001\u0017\u0003\u0017\u00d9\b\u0017\u0001"+
		"\u0017\u0001\u0017\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0018\u0001"+
		"\u0019\u0001\u0019\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0001"+
		"\u001a\u0001\u001a\u0001\u001a\u0001\u001a\u0003\u001a\u00eb\b\u001a\u0001"+
		"\u001a\u0000\u0001\u0016\u001b\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010"+
		"\u0012\u0014\u0016\u0018\u001a\u001c\u001e \"$&(*,.024\u0000\u0002\u0001"+
		"\u0000\u000b\r\u0001\u0000\u0017\u001a\u00ef\u00009\u0001\u0000\u0000"+
		"\u0000\u0002D\u0001\u0000\u0000\u0000\u0004F\u0001\u0000\u0000\u0000\u0006"+
		"J\u0001\u0000\u0000\u0000\bM\u0001\u0000\u0000\u0000\nT\u0001\u0000\u0000"+
		"\u0000\fW\u0001\u0000\u0000\u0000\u000em\u0001\u0000\u0000\u0000\u0010"+
		"y\u0001\u0000\u0000\u0000\u0012{\u0001\u0000\u0000\u0000\u0014\u008a\u0001"+
		"\u0000\u0000\u0000\u0016\u0092\u0001\u0000\u0000\u0000\u0018\u00a4\u0001"+
		"\u0000\u0000\u0000\u001a\u00a6\u0001\u0000\u0000\u0000\u001c\u00a8\u0001"+
		"\u0000\u0000\u0000\u001e\u00aa\u0001\u0000\u0000\u0000 \u00ac\u0001\u0000"+
		"\u0000\u0000\"\u00b0\u0001\u0000\u0000\u0000$\u00b2\u0001\u0000\u0000"+
		"\u0000&\u00b9\u0001\u0000\u0000\u0000(\u00be\u0001\u0000\u0000\u0000*"+
		"\u00cb\u0001\u0000\u0000\u0000,\u00cf\u0001\u0000\u0000\u0000.\u00d1\u0001"+
		"\u0000\u0000\u00000\u00dc\u0001\u0000\u0000\u00002\u00e0\u0001\u0000\u0000"+
		"\u00004\u00ea\u0001\u0000\u0000\u000068\u0003\u0002\u0001\u000076\u0001"+
		"\u0000\u0000\u00008;\u0001\u0000\u0000\u000097\u0001\u0000\u0000\u0000"+
		"9:\u0001\u0000\u0000\u0000:<\u0001\u0000\u0000\u0000;9\u0001\u0000\u0000"+
		"\u0000<=\u0005\u0000\u0000\u0001=\u0001\u0001\u0000\u0000\u0000>E\u0003"+
		"\u0004\u0002\u0000?E\u0003\u0006\u0003\u0000@E\u0003\f\u0006\u0000AE\u0003"+
		"\b\u0004\u0000BE\u0003\n\u0005\u0000CE\u0003.\u0017\u0000D>\u0001\u0000"+
		"\u0000\u0000D?\u0001\u0000\u0000\u0000D@\u0001\u0000\u0000\u0000DA\u0001"+
		"\u0000\u0000\u0000DB\u0001\u0000\u0000\u0000DC\u0001\u0000\u0000\u0000"+
		"E\u0003\u0001\u0000\u0000\u0000FG\u0005\u0001\u0000\u0000GH\u0005\u001f"+
		"\u0000\u0000HI\u0005\u001b\u0000\u0000I\u0005\u0001\u0000\u0000\u0000"+
		"JK\u0005\u0002\u0000\u0000KL\u0005\u001f\u0000\u0000L\u0007\u0001\u0000"+
		"\u0000\u0000MN\u0005\u0003\u0000\u0000NO\u0005\u0004\u0000\u0000OP\u0003"+
		"\u001e\u000f\u0000PQ\u0005\u0005\u0000\u0000QR\u0003 \u0010\u0000RS\u0005"+
		"\u0006\u0000\u0000S\t\u0001\u0000\u0000\u0000TU\u0005\u0007\u0000\u0000"+
		"UV\u0005\u001f\u0000\u0000V\u000b\u0001\u0000\u0000\u0000WX\u0005\u001f"+
		"\u0000\u0000X]\u0005\b\u0000\u0000Y^\u0003\u000e\u0007\u0000Z^\u0003("+
		"\u0014\u0000[^\u0001\u0000\u0000\u0000\\^\u0003*\u0015\u0000]Y\u0001\u0000"+
		"\u0000\u0000]Z\u0001\u0000\u0000\u0000][\u0001\u0000\u0000\u0000]\\\u0001"+
		"\u0000\u0000\u0000^\r\u0001\u0000\u0000\u0000_`\u0003\u0010\b\u0000`a"+
		"\u0005\u0004\u0000\u0000ad\u0001\u0000\u0000\u0000bd\u0003\"\u0011\u0000"+
		"c_\u0001\u0000\u0000\u0000cb\u0001\u0000\u0000\u0000dg\u0001\u0000\u0000"+
		"\u0000eh\u0005\u001f\u0000\u0000fh\u0003\u000e\u0007\u0000ge\u0001\u0000"+
		"\u0000\u0000gf\u0001\u0000\u0000\u0000hi\u0001\u0000\u0000\u0000ij\u0005"+
		"\u0006\u0000\u0000jn\u0001\u0000\u0000\u0000kn\u0003\u0016\u000b\u0000"+
		"ln\u0003.\u0017\u0000mc\u0001\u0000\u0000\u0000mk\u0001\u0000\u0000\u0000"+
		"ml\u0001\u0000\u0000\u0000n\u000f\u0001\u0000\u0000\u0000oq\u0003\u0012"+
		"\t\u0000pr\u0003\u0014\n\u0000qp\u0001\u0000\u0000\u0000qr\u0001\u0000"+
		"\u0000\u0000rz\u0001\u0000\u0000\u0000sz\u0005\t\u0000\u0000tv\u00032"+
		"\u0019\u0000uw\u00030\u0018\u0000vu\u0001\u0000\u0000\u0000vw\u0001\u0000"+
		"\u0000\u0000wz\u0001\u0000\u0000\u0000xz\u0005\n\u0000\u0000yo\u0001\u0000"+
		"\u0000\u0000ys\u0001\u0000\u0000\u0000yt\u0001\u0000\u0000\u0000yx\u0001"+
		"\u0000\u0000\u0000z\u0011\u0001\u0000\u0000\u0000{|\u0007\u0000\u0000"+
		"\u0000|\u0013\u0001\u0000\u0000\u0000}~\u0005\u0004\u0000\u0000~\u007f"+
		"\u0005\u001c\u0000\u0000\u007f\u0080\u0005\u0005\u0000\u0000\u0080\u0081"+
		"\u0005\u001c\u0000\u0000\u0081\u008b\u0005\u0006\u0000\u0000\u0082\u0083"+
		"\u0005\u0004\u0000\u0000\u0083\u0084\u0005\u001c\u0000\u0000\u0084\u008b"+
		"\u0005\u0006\u0000\u0000\u0085\u0086\u0005\u0004\u0000\u0000\u0086\u0087"+
		"\u0005\u001c\u0000\u0000\u0087\u0088\u0005\u0005\u0000\u0000\u0088\u0089"+
		"\u0005\u001c\u0000\u0000\u0089\u008b\u0005\u0006\u0000\u0000\u008a}\u0001"+
		"\u0000\u0000\u0000\u008a\u0082\u0001\u0000\u0000\u0000\u008a\u0085\u0001"+
		"\u0000\u0000\u0000\u008b\u0015\u0001\u0000\u0000\u0000\u008c\u008d\u0006"+
		"\u000b\uffff\uffff\u0000\u008d\u008e\u0005\u0004\u0000\u0000\u008e\u008f"+
		"\u0003\u0016\u000b\u0000\u008f\u0090\u0005\u0006\u0000\u0000\u0090\u0093"+
		"\u0001\u0000\u0000\u0000\u0091\u0093\u0005\u001f\u0000\u0000\u0092\u008c"+
		"\u0001\u0000\u0000\u0000\u0092\u0091\u0001\u0000\u0000\u0000\u0093\u00a1"+
		"\u0001\u0000\u0000\u0000\u0094\u0095\n\u0003\u0000\u0000\u0095\u0096\u0003"+
		"\u0018\f\u0000\u0096\u0097\u0003\u0016\u000b\u0004\u0097\u00a0\u0001\u0000"+
		"\u0000\u0000\u0098\u009b\n\u0002\u0000\u0000\u0099\u009c\u0003\u001a\r"+
		"\u0000\u009a\u009c\u0003\u001c\u000e\u0000\u009b\u0099\u0001\u0000\u0000"+
		"\u0000\u009b\u009a\u0001\u0000\u0000\u0000\u009c\u009d\u0001\u0000\u0000"+
		"\u0000\u009d\u009e\u0003\u0016\u000b\u0003\u009e\u00a0\u0001\u0000\u0000"+
		"\u0000\u009f\u0094\u0001\u0000\u0000\u0000\u009f\u0098\u0001\u0000\u0000"+
		"\u0000\u00a0\u00a3\u0001\u0000\u0000\u0000\u00a1\u009f\u0001\u0000\u0000"+
		"\u0000\u00a1\u00a2\u0001\u0000\u0000\u0000\u00a2\u0017\u0001\u0000\u0000"+
		"\u0000\u00a3\u00a1\u0001\u0000\u0000\u0000\u00a4\u00a5\u0005\u000e\u0000"+
		"\u0000\u00a5\u0019\u0001\u0000\u0000\u0000\u00a6\u00a7\u0005\u000f\u0000"+
		"\u0000\u00a7\u001b\u0001\u0000\u0000\u0000\u00a8\u00a9\u0005\u0010\u0000"+
		"\u0000\u00a9\u001d\u0001\u0000\u0000\u0000\u00aa\u00ab\u0005\u001f\u0000"+
		"\u0000\u00ab\u001f\u0001\u0000\u0000\u0000\u00ac\u00ad\u0005\u001f\u0000"+
		"\u0000\u00ad!\u0001\u0000\u0000\u0000\u00ae\u00b1\u0003$\u0012\u0000\u00af"+
		"\u00b1\u0003&\u0013\u0000\u00b0\u00ae\u0001\u0000\u0000\u0000\u00b0\u00af"+
		"\u0001\u0000\u0000\u0000\u00b1#\u0001\u0000\u0000\u0000\u00b2\u00b3\u0005"+
		"\u0011\u0000\u0000\u00b3\u00b4\u0005\u0004\u0000\u0000\u00b4\u00b5\u0005"+
		"\u001c\u0000\u0000\u00b5\u00b6\u0005\u0005\u0000\u0000\u00b6\u00b7\u0005"+
		"\u001c\u0000\u0000\u00b7\u00b8\u0005\u0005\u0000\u0000\u00b8%\u0001\u0000"+
		"\u0000\u0000\u00b9\u00ba\u0005\u0012\u0000\u0000\u00ba\u00bb\u0005\u0004"+
		"\u0000\u0000\u00bb\u00bc\u0005\u001c\u0000\u0000\u00bc\u00bd\u0005\u0005"+
		"\u0000\u0000\u00bd\'\u0001\u0000\u0000\u0000\u00be\u00c7\u0005\u0013\u0000"+
		"\u0000\u00bf\u00c4\u0005\u001f\u0000\u0000\u00c0\u00c1\u0005\u0005\u0000"+
		"\u0000\u00c1\u00c3\u0005\u001f\u0000\u0000\u00c2\u00c0\u0001\u0000\u0000"+
		"\u0000\u00c3\u00c6\u0001\u0000\u0000\u0000\u00c4\u00c2\u0001\u0000\u0000"+
		"\u0000\u00c4\u00c5\u0001\u0000\u0000\u0000\u00c5\u00c8\u0001\u0000\u0000"+
		"\u0000\u00c6\u00c4\u0001\u0000\u0000\u0000\u00c7\u00bf\u0001\u0000\u0000"+
		"\u0000\u00c7\u00c8\u0001\u0000\u0000\u0000\u00c8\u00c9\u0001\u0000\u0000"+
		"\u0000\u00c9\u00ca\u0005\u0014\u0000\u0000\u00ca)\u0001\u0000\u0000\u0000"+
		"\u00cb\u00cc\u0005\u001f\u0000\u0000\u00cc\u00cd\u0005\u0015\u0000\u0000"+
		"\u00cd\u00ce\u0005\u001c\u0000\u0000\u00ce+\u0001\u0000\u0000\u0000\u00cf"+
		"\u00d0\u0005\u0002\u0000\u0000\u00d0-\u0001\u0000\u0000\u0000\u00d1\u00d2"+
		"\u0005\u0016\u0000\u0000\u00d2\u00d3\u0005\u0004\u0000\u0000\u00d3\u00d4"+
		"\u0005\u001f\u0000\u0000\u00d4\u00d8\u0005\u0005\u0000\u0000\u00d5\u00d9"+
		"\u0003\u0010\b\u0000\u00d6\u00d9\u0003\"\u0011\u0000\u00d7\u00d9\u0003"+
		",\u0016\u0000\u00d8\u00d5\u0001\u0000\u0000\u0000\u00d8\u00d6\u0001\u0000"+
		"\u0000\u0000\u00d8\u00d7\u0001\u0000\u0000\u0000\u00d9\u00da\u0001\u0000"+
		"\u0000\u0000\u00da\u00db\u0005\u0006\u0000\u0000\u00db/\u0001\u0000\u0000"+
		"\u0000\u00dc\u00dd\u0005\u0004\u0000\u0000\u00dd\u00de\u0005\u001c\u0000"+
		"\u0000\u00de\u00df\u0005\u0006\u0000\u0000\u00df1\u0001\u0000\u0000\u0000"+
		"\u00e0\u00e1\u0007\u0001\u0000\u0000\u00e13\u0001\u0000\u0000\u0000\u00e2"+
		"\u00e3\u0005\u0004\u0000\u0000\u00e3\u00e4\u0005\u001c\u0000\u0000\u00e4"+
		"\u00e5\u0005\u0005\u0000\u0000\u00e5\u00e6\u0005\u001d\u0000\u0000\u00e6"+
		"\u00eb\u0005\u0006\u0000\u0000\u00e7\u00e8\u0005\u0004\u0000\u0000\u00e8"+
		"\u00e9\u0005\u001c\u0000\u0000\u00e9\u00eb\u0005\u0006\u0000\u0000\u00ea"+
		"\u00e2\u0001\u0000\u0000\u0000\u00ea\u00e7\u0001\u0000\u0000\u0000\u00eb"+
		"5\u0001\u0000\u0000\u0000\u00139D]cgmqvy\u008a\u0092\u009b\u009f\u00a1"+
		"\u00b0\u00c4\u00c7\u00d8\u00ea";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}