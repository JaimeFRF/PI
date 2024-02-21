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
		T__24=25, T__25=26, T__26=27, T__27=28, T__28=29, T__29=30, STRING=31, 
		INT=32, FLOAT=33, WS=34, VARIABLE=35;
	public static final int
		RULE_dsl = 0, RULE_command = 1, RULE_loadImageCommand = 2, RULE_showImageCommand = 3, 
		RULE_textRecognitionCommand = 4, RULE_printTextCommand = 5, RULE_assignementCommand = 6, 
		RULE_operation = 7, RULE_operationType = 8, RULE_blurType = 9, RULE_blurOptions = 10, 
		RULE_arithmeticOperation = 11, RULE_multOp = 12, RULE_addOp = 13, RULE_subOp = 14, 
		RULE_source = 15, RULE_dest = 16, RULE_imageManipulationType = 17, RULE_resizeOperation = 18, 
		RULE_rotateOperation = 19, RULE_maxValue = 20, RULE_thresholdType = 21, 
		RULE_options = 22;
	private static String[] makeRuleNames() {
		return new String[] {
			"dsl", "command", "loadImageCommand", "showImageCommand", "textRecognitionCommand", 
			"printTextCommand", "assignementCommand", "operation", "operationType", 
			"blurType", "blurOptions", "arithmeticOperation", "multOp", "addOp", 
			"subOp", "source", "dest", "imageManipulationType", "resizeOperation", 
			"rotateOperation", "maxValue", "thresholdType", "options"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'load'", "'from'", "';'", "'show'", "'recognise text from'", "'to'", 
			"'print'", "'='", "'on'", "'('", "')'", "'binarization'", "'countors'", 
			"'gaussianBlur'", "'bilateralBlur'", "'medianBlur'", "'with size'", "','", 
			"'*'", "'+'", "'-'", "'resize'", "'with ('", "'rotate'", "'degrees'", 
			"'maxValue'", "'binary_threshold'", "'binary_inv_threshold'", "'otsu_threshold'", 
			"'otsu_binary_inv_threshold'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, "STRING", "INT", "FLOAT", "WS", 
			"VARIABLE"
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
			setState(49);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 34359738546L) != 0)) {
				{
				{
				setState(46);
				command();
				}
				}
				setState(51);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(52);
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
		public CommandContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_command; }
	}

	public final CommandContext command() throws RecognitionException {
		CommandContext _localctx = new CommandContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_command);
		try {
			setState(59);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__0:
				enterOuterAlt(_localctx, 1);
				{
				setState(54);
				loadImageCommand();
				}
				break;
			case T__3:
				enterOuterAlt(_localctx, 2);
				{
				setState(55);
				showImageCommand();
				}
				break;
			case VARIABLE:
				enterOuterAlt(_localctx, 3);
				{
				setState(56);
				assignementCommand();
				}
				break;
			case T__4:
				enterOuterAlt(_localctx, 4);
				{
				setState(57);
				textRecognitionCommand();
				}
				break;
			case T__6:
				enterOuterAlt(_localctx, 5);
				{
				setState(58);
				printTextCommand();
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
			setState(61);
			match(T__0);
			setState(62);
			match(VARIABLE);
			setState(63);
			match(T__1);
			setState(64);
			((LoadImageCommandContext)_localctx).path = match(STRING);
			setState(65);
			match(T__2);
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
			setState(67);
			match(T__3);
			setState(68);
			match(VARIABLE);
			setState(69);
			match(T__2);
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
			setState(71);
			match(T__4);
			setState(72);
			source();
			setState(73);
			match(T__5);
			setState(74);
			dest();
			setState(75);
			match(T__2);
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
			setState(77);
			match(T__6);
			setState(78);
			match(VARIABLE);
			setState(79);
			match(T__2);
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
			setState(81);
			match(VARIABLE);
			setState(82);
			match(T__7);
			setState(83);
			operation();
			setState(84);
			match(T__2);
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
		public OperationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_operation; }
	}

	public final OperationContext operation() throws RecognitionException {
		OperationContext _localctx = new OperationContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_operation);
		try {
			setState(99);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__11:
			case T__12:
			case T__13:
			case T__14:
			case T__15:
			case T__21:
			case T__23:
			case T__26:
			case T__27:
			case T__28:
			case T__29:
				enterOuterAlt(_localctx, 1);
				{
				setState(88);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case T__11:
				case T__12:
				case T__13:
				case T__14:
				case T__15:
				case T__26:
				case T__27:
				case T__28:
				case T__29:
					{
					setState(86);
					operationType();
					}
					break;
				case T__21:
				case T__23:
					{
					setState(87);
					imageManipulationType();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				setState(90);
				match(T__8);
				setState(96);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case VARIABLE:
					{
					setState(91);
					match(VARIABLE);
					}
					break;
				case T__9:
					{
					setState(92);
					match(T__9);
					setState(93);
					operation();
					setState(94);
					match(T__10);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				break;
			case T__9:
			case VARIABLE:
				enterOuterAlt(_localctx, 2);
				{
				setState(98);
				arithmeticOperation(0);
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
		int _la;
		try {
			setState(111);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__13:
			case T__14:
			case T__15:
				enterOuterAlt(_localctx, 1);
				{
				setState(101);
				blurType();
				setState(103);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__9 || _la==T__16) {
					{
					setState(102);
					((OperationTypeContext)_localctx).blurOpts = blurOptions();
					}
				}

				}
				break;
			case T__11:
				enterOuterAlt(_localctx, 2);
				{
				setState(105);
				match(T__11);
				}
				break;
			case T__26:
			case T__27:
			case T__28:
			case T__29:
				enterOuterAlt(_localctx, 3);
				{
				setState(106);
				thresholdType();
				setState(108);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__25) {
					{
					setState(107);
					((OperationTypeContext)_localctx).thresholdOpts = maxValue();
					}
				}

				}
				break;
			case T__12:
				enterOuterAlt(_localctx, 4);
				{
				setState(110);
				match(T__12);
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
			setState(113);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 114688L) != 0)) ) {
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
			setState(129);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(115);
				match(T__16);
				setState(116);
				match(T__9);
				setState(117);
				((BlurOptionsContext)_localctx).size1 = match(INT);
				setState(118);
				match(T__17);
				setState(119);
				((BlurOptionsContext)_localctx).size2 = match(INT);
				setState(120);
				match(T__10);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(121);
				match(T__9);
				setState(122);
				((BlurOptionsContext)_localctx).ksize = match(INT);
				setState(123);
				match(T__10);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(124);
				match(T__9);
				setState(125);
				((BlurOptionsContext)_localctx).ksize = match(INT);
				setState(126);
				match(T__17);
				setState(127);
				((BlurOptionsContext)_localctx).sigma = match(INT);
				setState(128);
				match(T__10);
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
			setState(137);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__9:
				{
				setState(132);
				match(T__9);
				setState(133);
				arithmeticOperation(0);
				setState(134);
				match(T__10);
				}
				break;
			case VARIABLE:
				{
				setState(136);
				match(VARIABLE);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(152);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(150);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,11,_ctx) ) {
					case 1:
						{
						_localctx = new ArithmeticOperationContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_arithmeticOperation);
						setState(139);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(140);
						multOp();
						setState(141);
						arithmeticOperation(4);
						}
						break;
					case 2:
						{
						_localctx = new ArithmeticOperationContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_arithmeticOperation);
						setState(143);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(146);
						_errHandler.sync(this);
						switch (_input.LA(1)) {
						case T__19:
							{
							setState(144);
							addOp();
							}
							break;
						case T__20:
							{
							setState(145);
							subOp();
							}
							break;
						default:
							throw new NoViableAltException(this);
						}
						setState(148);
						arithmeticOperation(3);
						}
						break;
					}
					} 
				}
				setState(154);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
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
			setState(155);
			match(T__18);
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
			setState(157);
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
			setState(159);
			match(T__20);
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
			setState(161);
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
			setState(163);
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
			setState(167);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__21:
				enterOuterAlt(_localctx, 1);
				{
				setState(165);
				resizeOperation();
				}
				break;
			case T__23:
				enterOuterAlt(_localctx, 2);
				{
				setState(166);
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
			setState(169);
			match(T__21);
			setState(170);
			match(T__22);
			setState(171);
			((ResizeOperationContext)_localctx).width = match(INT);
			setState(172);
			match(T__17);
			setState(173);
			((ResizeOperationContext)_localctx).height = match(INT);
			setState(174);
			match(T__10);
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
			setState(176);
			match(T__23);
			setState(177);
			((RotateOperationContext)_localctx).degrees = match(INT);
			setState(178);
			match(T__24);
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
		enterRule(_localctx, 40, RULE_maxValue);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(180);
			match(T__25);
			setState(181);
			match(T__7);
			setState(182);
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
	public static class ThresholdTypeContext extends ParserRuleContext {
		public ThresholdTypeContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_thresholdType; }
	}

	public final ThresholdTypeContext thresholdType() throws RecognitionException {
		ThresholdTypeContext _localctx = new ThresholdTypeContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_thresholdType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(184);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 2013265920L) != 0)) ) {
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
		enterRule(_localctx, 44, RULE_options);
		try {
			setState(194);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(186);
				match(T__9);
				setState(187);
				((OptionsContext)_localctx).size = match(INT);
				setState(188);
				match(T__17);
				setState(189);
				((OptionsContext)_localctx).sigma = match(FLOAT);
				setState(190);
				match(T__10);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(191);
				match(T__9);
				setState(192);
				((OptionsContext)_localctx).size = match(INT);
				setState(193);
				match(T__10);
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
		"\u0004\u0001#\u00c5\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b\u0002"+
		"\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007\u000f"+
		"\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002\u0012\u0007\u0012"+
		"\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002\u0015\u0007\u0015"+
		"\u0002\u0016\u0007\u0016\u0001\u0000\u0005\u00000\b\u0000\n\u0000\f\u0000"+
		"3\t\u0000\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0001\u0003\u0001<\b\u0001\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0007"+
		"\u0001\u0007\u0003\u0007Y\b\u0007\u0001\u0007\u0001\u0007\u0001\u0007"+
		"\u0001\u0007\u0001\u0007\u0001\u0007\u0003\u0007a\b\u0007\u0001\u0007"+
		"\u0003\u0007d\b\u0007\u0001\b\u0001\b\u0003\bh\b\b\u0001\b\u0001\b\u0001"+
		"\b\u0003\bm\b\b\u0001\b\u0003\bp\b\b\u0001\t\u0001\t\u0001\n\u0001\n\u0001"+
		"\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001"+
		"\n\u0001\n\u0001\n\u0003\n\u0082\b\n\u0001\u000b\u0001\u000b\u0001\u000b"+
		"\u0001\u000b\u0001\u000b\u0001\u000b\u0003\u000b\u008a\b\u000b\u0001\u000b"+
		"\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b"+
		"\u0003\u000b\u0093\b\u000b\u0001\u000b\u0001\u000b\u0005\u000b\u0097\b"+
		"\u000b\n\u000b\f\u000b\u009a\t\u000b\u0001\f\u0001\f\u0001\r\u0001\r\u0001"+
		"\u000e\u0001\u000e\u0001\u000f\u0001\u000f\u0001\u0010\u0001\u0010\u0001"+
		"\u0011\u0001\u0011\u0003\u0011\u00a8\b\u0011\u0001\u0012\u0001\u0012\u0001"+
		"\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0012\u0001\u0013\u0001"+
		"\u0013\u0001\u0013\u0001\u0013\u0001\u0014\u0001\u0014\u0001\u0014\u0001"+
		"\u0014\u0001\u0015\u0001\u0015\u0001\u0016\u0001\u0016\u0001\u0016\u0001"+
		"\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0003\u0016\u00c3"+
		"\b\u0016\u0001\u0016\u0000\u0001\u0016\u0017\u0000\u0002\u0004\u0006\b"+
		"\n\f\u000e\u0010\u0012\u0014\u0016\u0018\u001a\u001c\u001e \"$&(*,\u0000"+
		"\u0002\u0001\u0000\u000e\u0010\u0001\u0000\u001b\u001e\u00c2\u00001\u0001"+
		"\u0000\u0000\u0000\u0002;\u0001\u0000\u0000\u0000\u0004=\u0001\u0000\u0000"+
		"\u0000\u0006C\u0001\u0000\u0000\u0000\bG\u0001\u0000\u0000\u0000\nM\u0001"+
		"\u0000\u0000\u0000\fQ\u0001\u0000\u0000\u0000\u000ec\u0001\u0000\u0000"+
		"\u0000\u0010o\u0001\u0000\u0000\u0000\u0012q\u0001\u0000\u0000\u0000\u0014"+
		"\u0081\u0001\u0000\u0000\u0000\u0016\u0089\u0001\u0000\u0000\u0000\u0018"+
		"\u009b\u0001\u0000\u0000\u0000\u001a\u009d\u0001\u0000\u0000\u0000\u001c"+
		"\u009f\u0001\u0000\u0000\u0000\u001e\u00a1\u0001\u0000\u0000\u0000 \u00a3"+
		"\u0001\u0000\u0000\u0000\"\u00a7\u0001\u0000\u0000\u0000$\u00a9\u0001"+
		"\u0000\u0000\u0000&\u00b0\u0001\u0000\u0000\u0000(\u00b4\u0001\u0000\u0000"+
		"\u0000*\u00b8\u0001\u0000\u0000\u0000,\u00c2\u0001\u0000\u0000\u0000."+
		"0\u0003\u0002\u0001\u0000/.\u0001\u0000\u0000\u000003\u0001\u0000\u0000"+
		"\u00001/\u0001\u0000\u0000\u000012\u0001\u0000\u0000\u000024\u0001\u0000"+
		"\u0000\u000031\u0001\u0000\u0000\u000045\u0005\u0000\u0000\u00015\u0001"+
		"\u0001\u0000\u0000\u00006<\u0003\u0004\u0002\u00007<\u0003\u0006\u0003"+
		"\u00008<\u0003\f\u0006\u00009<\u0003\b\u0004\u0000:<\u0003\n\u0005\u0000"+
		";6\u0001\u0000\u0000\u0000;7\u0001\u0000\u0000\u0000;8\u0001\u0000\u0000"+
		"\u0000;9\u0001\u0000\u0000\u0000;:\u0001\u0000\u0000\u0000<\u0003\u0001"+
		"\u0000\u0000\u0000=>\u0005\u0001\u0000\u0000>?\u0005#\u0000\u0000?@\u0005"+
		"\u0002\u0000\u0000@A\u0005\u001f\u0000\u0000AB\u0005\u0003\u0000\u0000"+
		"B\u0005\u0001\u0000\u0000\u0000CD\u0005\u0004\u0000\u0000DE\u0005#\u0000"+
		"\u0000EF\u0005\u0003\u0000\u0000F\u0007\u0001\u0000\u0000\u0000GH\u0005"+
		"\u0005\u0000\u0000HI\u0003\u001e\u000f\u0000IJ\u0005\u0006\u0000\u0000"+
		"JK\u0003 \u0010\u0000KL\u0005\u0003\u0000\u0000L\t\u0001\u0000\u0000\u0000"+
		"MN\u0005\u0007\u0000\u0000NO\u0005#\u0000\u0000OP\u0005\u0003\u0000\u0000"+
		"P\u000b\u0001\u0000\u0000\u0000QR\u0005#\u0000\u0000RS\u0005\b\u0000\u0000"+
		"ST\u0003\u000e\u0007\u0000TU\u0005\u0003\u0000\u0000U\r\u0001\u0000\u0000"+
		"\u0000VY\u0003\u0010\b\u0000WY\u0003\"\u0011\u0000XV\u0001\u0000\u0000"+
		"\u0000XW\u0001\u0000\u0000\u0000YZ\u0001\u0000\u0000\u0000Z`\u0005\t\u0000"+
		"\u0000[a\u0005#\u0000\u0000\\]\u0005\n\u0000\u0000]^\u0003\u000e\u0007"+
		"\u0000^_\u0005\u000b\u0000\u0000_a\u0001\u0000\u0000\u0000`[\u0001\u0000"+
		"\u0000\u0000`\\\u0001\u0000\u0000\u0000ad\u0001\u0000\u0000\u0000bd\u0003"+
		"\u0016\u000b\u0000cX\u0001\u0000\u0000\u0000cb\u0001\u0000\u0000\u0000"+
		"d\u000f\u0001\u0000\u0000\u0000eg\u0003\u0012\t\u0000fh\u0003\u0014\n"+
		"\u0000gf\u0001\u0000\u0000\u0000gh\u0001\u0000\u0000\u0000hp\u0001\u0000"+
		"\u0000\u0000ip\u0005\f\u0000\u0000jl\u0003*\u0015\u0000km\u0003(\u0014"+
		"\u0000lk\u0001\u0000\u0000\u0000lm\u0001\u0000\u0000\u0000mp\u0001\u0000"+
		"\u0000\u0000np\u0005\r\u0000\u0000oe\u0001\u0000\u0000\u0000oi\u0001\u0000"+
		"\u0000\u0000oj\u0001\u0000\u0000\u0000on\u0001\u0000\u0000\u0000p\u0011"+
		"\u0001\u0000\u0000\u0000qr\u0007\u0000\u0000\u0000r\u0013\u0001\u0000"+
		"\u0000\u0000st\u0005\u0011\u0000\u0000tu\u0005\n\u0000\u0000uv\u0005 "+
		"\u0000\u0000vw\u0005\u0012\u0000\u0000wx\u0005 \u0000\u0000x\u0082\u0005"+
		"\u000b\u0000\u0000yz\u0005\n\u0000\u0000z{\u0005 \u0000\u0000{\u0082\u0005"+
		"\u000b\u0000\u0000|}\u0005\n\u0000\u0000}~\u0005 \u0000\u0000~\u007f\u0005"+
		"\u0012\u0000\u0000\u007f\u0080\u0005 \u0000\u0000\u0080\u0082\u0005\u000b"+
		"\u0000\u0000\u0081s\u0001\u0000\u0000\u0000\u0081y\u0001\u0000\u0000\u0000"+
		"\u0081|\u0001\u0000\u0000\u0000\u0082\u0015\u0001\u0000\u0000\u0000\u0083"+
		"\u0084\u0006\u000b\uffff\uffff\u0000\u0084\u0085\u0005\n\u0000\u0000\u0085"+
		"\u0086\u0003\u0016\u000b\u0000\u0086\u0087\u0005\u000b\u0000\u0000\u0087"+
		"\u008a\u0001\u0000\u0000\u0000\u0088\u008a\u0005#\u0000\u0000\u0089\u0083"+
		"\u0001\u0000\u0000\u0000\u0089\u0088\u0001\u0000\u0000\u0000\u008a\u0098"+
		"\u0001\u0000\u0000\u0000\u008b\u008c\n\u0003\u0000\u0000\u008c\u008d\u0003"+
		"\u0018\f\u0000\u008d\u008e\u0003\u0016\u000b\u0004\u008e\u0097\u0001\u0000"+
		"\u0000\u0000\u008f\u0092\n\u0002\u0000\u0000\u0090\u0093\u0003\u001a\r"+
		"\u0000\u0091\u0093\u0003\u001c\u000e\u0000\u0092\u0090\u0001\u0000\u0000"+
		"\u0000\u0092\u0091\u0001\u0000\u0000\u0000\u0093\u0094\u0001\u0000\u0000"+
		"\u0000\u0094\u0095\u0003\u0016\u000b\u0003\u0095\u0097\u0001\u0000\u0000"+
		"\u0000\u0096\u008b\u0001\u0000\u0000\u0000\u0096\u008f\u0001\u0000\u0000"+
		"\u0000\u0097\u009a\u0001\u0000\u0000\u0000\u0098\u0096\u0001\u0000\u0000"+
		"\u0000\u0098\u0099\u0001\u0000\u0000\u0000\u0099\u0017\u0001\u0000\u0000"+
		"\u0000\u009a\u0098\u0001\u0000\u0000\u0000\u009b\u009c\u0005\u0013\u0000"+
		"\u0000\u009c\u0019\u0001\u0000\u0000\u0000\u009d\u009e\u0005\u0014\u0000"+
		"\u0000\u009e\u001b\u0001\u0000\u0000\u0000\u009f\u00a0\u0005\u0015\u0000"+
		"\u0000\u00a0\u001d\u0001\u0000\u0000\u0000\u00a1\u00a2\u0005#\u0000\u0000"+
		"\u00a2\u001f\u0001\u0000\u0000\u0000\u00a3\u00a4\u0005#\u0000\u0000\u00a4"+
		"!\u0001\u0000\u0000\u0000\u00a5\u00a8\u0003$\u0012\u0000\u00a6\u00a8\u0003"+
		"&\u0013\u0000\u00a7\u00a5\u0001\u0000\u0000\u0000\u00a7\u00a6\u0001\u0000"+
		"\u0000\u0000\u00a8#\u0001\u0000\u0000\u0000\u00a9\u00aa\u0005\u0016\u0000"+
		"\u0000\u00aa\u00ab\u0005\u0017\u0000\u0000\u00ab\u00ac\u0005 \u0000\u0000"+
		"\u00ac\u00ad\u0005\u0012\u0000\u0000\u00ad\u00ae\u0005 \u0000\u0000\u00ae"+
		"\u00af\u0005\u000b\u0000\u0000\u00af%\u0001\u0000\u0000\u0000\u00b0\u00b1"+
		"\u0005\u0018\u0000\u0000\u00b1\u00b2\u0005 \u0000\u0000\u00b2\u00b3\u0005"+
		"\u0019\u0000\u0000\u00b3\'\u0001\u0000\u0000\u0000\u00b4\u00b5\u0005\u001a"+
		"\u0000\u0000\u00b5\u00b6\u0005\b\u0000\u0000\u00b6\u00b7\u0005 \u0000"+
		"\u0000\u00b7)\u0001\u0000\u0000\u0000\u00b8\u00b9\u0007\u0001\u0000\u0000"+
		"\u00b9+\u0001\u0000\u0000\u0000\u00ba\u00bb\u0005\n\u0000\u0000\u00bb"+
		"\u00bc\u0005 \u0000\u0000\u00bc\u00bd\u0005\u0012\u0000\u0000\u00bd\u00be"+
		"\u0005!\u0000\u0000\u00be\u00c3\u0005\u000b\u0000\u0000\u00bf\u00c0\u0005"+
		"\n\u0000\u0000\u00c0\u00c1\u0005 \u0000\u0000\u00c1\u00c3\u0005\u000b"+
		"\u0000\u0000\u00c2\u00ba\u0001\u0000\u0000\u0000\u00c2\u00bf\u0001\u0000"+
		"\u0000\u0000\u00c3-\u0001\u0000\u0000\u0000\u000f1;X`cglo\u0081\u0089"+
		"\u0092\u0096\u0098\u00a7\u00c2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}