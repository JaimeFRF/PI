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
		T__17=18, T__18=19, T__19=20, T__20=21, T__21=22, T__22=23, STRING=24, 
		INT=25, FLOAT=26, WS=27, VARIABLE=28;
	public static final int
		RULE_dsl = 0, RULE_command = 1, RULE_loadImageCommand = 2, RULE_showImageCommand = 3, 
		RULE_assignementCommand = 4, RULE_operation = 5, RULE_operationType = 6, 
		RULE_blurType = 7, RULE_blurOptions = 8, RULE_arithmeticOperation = 9, 
		RULE_multOp = 10, RULE_addOp = 11, RULE_subOp = 12, RULE_maxValue = 13, 
		RULE_thresholdType = 14, RULE_options = 15;
	private static String[] makeRuleNames() {
		return new String[] {
			"dsl", "command", "loadImageCommand", "showImageCommand", "assignementCommand", 
			"operation", "operationType", "blurType", "blurOptions", "arithmeticOperation", 
			"multOp", "addOp", "subOp", "maxValue", "thresholdType", "options"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'load'", "'from'", "';'", "'show'", "'='", "'on'", "'('", "')'", 
			"'binarization'", "'countors'", "'gaussianBlur'", "'bilateralBlur'", 
			"'medianBlur'", "'with size'", "','", "'*'", "'+'", "'-'", "'maxValue'", 
			"'binary_threshold'", "'binary_inv_threshold'", "'otsu_threshold'", "'otsu_binary_inv_threshold'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			null, null, null, null, null, null, null, null, null, null, null, null, 
			"STRING", "INT", "FLOAT", "WS", "VARIABLE"
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
			setState(35);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 268435474L) != 0)) {
				{
				{
				setState(32);
				command();
				}
				}
				setState(37);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(38);
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
		public CommandContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_command; }
	}

	public final CommandContext command() throws RecognitionException {
		CommandContext _localctx = new CommandContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_command);
		try {
			setState(43);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__0:
				enterOuterAlt(_localctx, 1);
				{
				setState(40);
				loadImageCommand();
				}
				break;
			case T__3:
				enterOuterAlt(_localctx, 2);
				{
				setState(41);
				showImageCommand();
				}
				break;
			case VARIABLE:
				enterOuterAlt(_localctx, 3);
				{
				setState(42);
				assignementCommand();
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
			setState(45);
			match(T__0);
			setState(46);
			match(VARIABLE);
			setState(47);
			match(T__1);
			setState(48);
			((LoadImageCommandContext)_localctx).path = match(STRING);
			setState(49);
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
			setState(51);
			match(T__3);
			setState(52);
			match(VARIABLE);
			setState(53);
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
		enterRule(_localctx, 8, RULE_assignementCommand);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(55);
			match(VARIABLE);
			setState(56);
			match(T__4);
			setState(57);
			operation();
			setState(58);
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
		enterRule(_localctx, 10, RULE_operation);
		try {
			setState(70);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__8:
			case T__9:
			case T__10:
			case T__11:
			case T__12:
			case T__19:
			case T__20:
			case T__21:
			case T__22:
				enterOuterAlt(_localctx, 1);
				{
				setState(60);
				operationType();
				setState(61);
				match(T__5);
				setState(67);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case VARIABLE:
					{
					setState(62);
					match(VARIABLE);
					}
					break;
				case T__6:
					{
					setState(63);
					match(T__6);
					setState(64);
					operation();
					setState(65);
					match(T__7);
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				break;
			case T__6:
			case VARIABLE:
				enterOuterAlt(_localctx, 2);
				{
				setState(69);
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
		enterRule(_localctx, 12, RULE_operationType);
		int _la;
		try {
			setState(82);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__10:
			case T__11:
			case T__12:
				enterOuterAlt(_localctx, 1);
				{
				setState(72);
				blurType();
				setState(74);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__6 || _la==T__13) {
					{
					setState(73);
					((OperationTypeContext)_localctx).blurOpts = blurOptions();
					}
				}

				}
				break;
			case T__8:
				enterOuterAlt(_localctx, 2);
				{
				setState(76);
				match(T__8);
				}
				break;
			case T__19:
			case T__20:
			case T__21:
			case T__22:
				enterOuterAlt(_localctx, 3);
				{
				setState(77);
				thresholdType();
				setState(79);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__18) {
					{
					setState(78);
					((OperationTypeContext)_localctx).thresholdOpts = maxValue();
					}
				}

				}
				break;
			case T__9:
				enterOuterAlt(_localctx, 4);
				{
				setState(81);
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
		enterRule(_localctx, 14, RULE_blurType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(84);
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
		enterRule(_localctx, 16, RULE_blurOptions);
		try {
			setState(100);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,7,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(86);
				match(T__13);
				setState(87);
				match(T__6);
				setState(88);
				((BlurOptionsContext)_localctx).size1 = match(INT);
				setState(89);
				match(T__14);
				setState(90);
				((BlurOptionsContext)_localctx).size2 = match(INT);
				setState(91);
				match(T__7);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(92);
				match(T__6);
				setState(93);
				((BlurOptionsContext)_localctx).ksize = match(INT);
				setState(94);
				match(T__7);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(95);
				match(T__6);
				setState(96);
				((BlurOptionsContext)_localctx).ksize = match(INT);
				setState(97);
				match(T__14);
				setState(98);
				((BlurOptionsContext)_localctx).sigma = match(INT);
				setState(99);
				match(T__7);
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
		int _startState = 18;
		enterRecursionRule(_localctx, 18, RULE_arithmeticOperation, _p);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(108);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__6:
				{
				setState(103);
				match(T__6);
				setState(104);
				arithmeticOperation(0);
				setState(105);
				match(T__7);
				}
				break;
			case VARIABLE:
				{
				setState(107);
				match(VARIABLE);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
			_ctx.stop = _input.LT(-1);
			setState(123);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					if ( _parseListeners!=null ) triggerExitRuleEvent();
					_prevctx = _localctx;
					{
					setState(121);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,10,_ctx) ) {
					case 1:
						{
						_localctx = new ArithmeticOperationContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_arithmeticOperation);
						setState(110);
						if (!(precpred(_ctx, 3))) throw new FailedPredicateException(this, "precpred(_ctx, 3)");
						setState(111);
						multOp();
						setState(112);
						arithmeticOperation(4);
						}
						break;
					case 2:
						{
						_localctx = new ArithmeticOperationContext(_parentctx, _parentState);
						pushNewRecursionContext(_localctx, _startState, RULE_arithmeticOperation);
						setState(114);
						if (!(precpred(_ctx, 2))) throw new FailedPredicateException(this, "precpred(_ctx, 2)");
						setState(117);
						_errHandler.sync(this);
						switch (_input.LA(1)) {
						case T__16:
							{
							setState(115);
							addOp();
							}
							break;
						case T__17:
							{
							setState(116);
							subOp();
							}
							break;
						default:
							throw new NoViableAltException(this);
						}
						setState(119);
						arithmeticOperation(3);
						}
						break;
					}
					} 
				}
				setState(125);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,11,_ctx);
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
		enterRule(_localctx, 20, RULE_multOp);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(126);
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
	public static class AddOpContext extends ParserRuleContext {
		public AddOpContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_addOp; }
	}

	public final AddOpContext addOp() throws RecognitionException {
		AddOpContext _localctx = new AddOpContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_addOp);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(128);
			match(T__16);
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
		enterRule(_localctx, 24, RULE_subOp);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(130);
			match(T__17);
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
		enterRule(_localctx, 26, RULE_maxValue);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(132);
			match(T__18);
			setState(133);
			match(T__4);
			setState(134);
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
		enterRule(_localctx, 28, RULE_thresholdType);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(136);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 15728640L) != 0)) ) {
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
		enterRule(_localctx, 30, RULE_options);
		try {
			setState(146);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,12,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(138);
				match(T__6);
				setState(139);
				((OptionsContext)_localctx).size = match(INT);
				setState(140);
				match(T__14);
				setState(141);
				((OptionsContext)_localctx).sigma = match(FLOAT);
				setState(142);
				match(T__7);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(143);
				match(T__6);
				setState(144);
				((OptionsContext)_localctx).size = match(INT);
				setState(145);
				match(T__7);
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
		case 9:
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
		"\u0004\u0001\u001c\u0095\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001"+
		"\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004"+
		"\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007"+
		"\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b\u0007\u000b"+
		"\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002\u000f\u0007"+
		"\u000f\u0001\u0000\u0005\u0000\"\b\u0000\n\u0000\f\u0000%\t\u0000\u0001"+
		"\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0001\u0003\u0001,\b"+
		"\u0001\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0002\u0001"+
		"\u0002\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0004\u0001"+
		"\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005\u0001"+
		"\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0003\u0005D\b"+
		"\u0005\u0001\u0005\u0003\u0005G\b\u0005\u0001\u0006\u0001\u0006\u0003"+
		"\u0006K\b\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0003\u0006P\b\u0006"+
		"\u0001\u0006\u0003\u0006S\b\u0006\u0001\u0007\u0001\u0007\u0001\b\u0001"+
		"\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001"+
		"\b\u0001\b\u0001\b\u0001\b\u0003\be\b\b\u0001\t\u0001\t\u0001\t\u0001"+
		"\t\u0001\t\u0001\t\u0003\tm\b\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001"+
		"\t\u0001\t\u0001\t\u0003\tv\b\t\u0001\t\u0001\t\u0005\tz\b\t\n\t\f\t}"+
		"\t\t\u0001\n\u0001\n\u0001\u000b\u0001\u000b\u0001\f\u0001\f\u0001\r\u0001"+
		"\r\u0001\r\u0001\r\u0001\u000e\u0001\u000e\u0001\u000f\u0001\u000f\u0001"+
		"\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0001\u000f\u0003"+
		"\u000f\u0093\b\u000f\u0001\u000f\u0000\u0001\u0012\u0010\u0000\u0002\u0004"+
		"\u0006\b\n\f\u000e\u0010\u0012\u0014\u0016\u0018\u001a\u001c\u001e\u0000"+
		"\u0002\u0001\u0000\u000b\r\u0001\u0000\u0014\u0017\u0095\u0000#\u0001"+
		"\u0000\u0000\u0000\u0002+\u0001\u0000\u0000\u0000\u0004-\u0001\u0000\u0000"+
		"\u0000\u00063\u0001\u0000\u0000\u0000\b7\u0001\u0000\u0000\u0000\nF\u0001"+
		"\u0000\u0000\u0000\fR\u0001\u0000\u0000\u0000\u000eT\u0001\u0000\u0000"+
		"\u0000\u0010d\u0001\u0000\u0000\u0000\u0012l\u0001\u0000\u0000\u0000\u0014"+
		"~\u0001\u0000\u0000\u0000\u0016\u0080\u0001\u0000\u0000\u0000\u0018\u0082"+
		"\u0001\u0000\u0000\u0000\u001a\u0084\u0001\u0000\u0000\u0000\u001c\u0088"+
		"\u0001\u0000\u0000\u0000\u001e\u0092\u0001\u0000\u0000\u0000 \"\u0003"+
		"\u0002\u0001\u0000! \u0001\u0000\u0000\u0000\"%\u0001\u0000\u0000\u0000"+
		"#!\u0001\u0000\u0000\u0000#$\u0001\u0000\u0000\u0000$&\u0001\u0000\u0000"+
		"\u0000%#\u0001\u0000\u0000\u0000&\'\u0005\u0000\u0000\u0001\'\u0001\u0001"+
		"\u0000\u0000\u0000(,\u0003\u0004\u0002\u0000),\u0003\u0006\u0003\u0000"+
		"*,\u0003\b\u0004\u0000+(\u0001\u0000\u0000\u0000+)\u0001\u0000\u0000\u0000"+
		"+*\u0001\u0000\u0000\u0000,\u0003\u0001\u0000\u0000\u0000-.\u0005\u0001"+
		"\u0000\u0000./\u0005\u001c\u0000\u0000/0\u0005\u0002\u0000\u000001\u0005"+
		"\u0018\u0000\u000012\u0005\u0003\u0000\u00002\u0005\u0001\u0000\u0000"+
		"\u000034\u0005\u0004\u0000\u000045\u0005\u001c\u0000\u000056\u0005\u0003"+
		"\u0000\u00006\u0007\u0001\u0000\u0000\u000078\u0005\u001c\u0000\u0000"+
		"89\u0005\u0005\u0000\u00009:\u0003\n\u0005\u0000:;\u0005\u0003\u0000\u0000"+
		";\t\u0001\u0000\u0000\u0000<=\u0003\f\u0006\u0000=C\u0005\u0006\u0000"+
		"\u0000>D\u0005\u001c\u0000\u0000?@\u0005\u0007\u0000\u0000@A\u0003\n\u0005"+
		"\u0000AB\u0005\b\u0000\u0000BD\u0001\u0000\u0000\u0000C>\u0001\u0000\u0000"+
		"\u0000C?\u0001\u0000\u0000\u0000DG\u0001\u0000\u0000\u0000EG\u0003\u0012"+
		"\t\u0000F<\u0001\u0000\u0000\u0000FE\u0001\u0000\u0000\u0000G\u000b\u0001"+
		"\u0000\u0000\u0000HJ\u0003\u000e\u0007\u0000IK\u0003\u0010\b\u0000JI\u0001"+
		"\u0000\u0000\u0000JK\u0001\u0000\u0000\u0000KS\u0001\u0000\u0000\u0000"+
		"LS\u0005\t\u0000\u0000MO\u0003\u001c\u000e\u0000NP\u0003\u001a\r\u0000"+
		"ON\u0001\u0000\u0000\u0000OP\u0001\u0000\u0000\u0000PS\u0001\u0000\u0000"+
		"\u0000QS\u0005\n\u0000\u0000RH\u0001\u0000\u0000\u0000RL\u0001\u0000\u0000"+
		"\u0000RM\u0001\u0000\u0000\u0000RQ\u0001\u0000\u0000\u0000S\r\u0001\u0000"+
		"\u0000\u0000TU\u0007\u0000\u0000\u0000U\u000f\u0001\u0000\u0000\u0000"+
		"VW\u0005\u000e\u0000\u0000WX\u0005\u0007\u0000\u0000XY\u0005\u0019\u0000"+
		"\u0000YZ\u0005\u000f\u0000\u0000Z[\u0005\u0019\u0000\u0000[e\u0005\b\u0000"+
		"\u0000\\]\u0005\u0007\u0000\u0000]^\u0005\u0019\u0000\u0000^e\u0005\b"+
		"\u0000\u0000_`\u0005\u0007\u0000\u0000`a\u0005\u0019\u0000\u0000ab\u0005"+
		"\u000f\u0000\u0000bc\u0005\u0019\u0000\u0000ce\u0005\b\u0000\u0000dV\u0001"+
		"\u0000\u0000\u0000d\\\u0001\u0000\u0000\u0000d_\u0001\u0000\u0000\u0000"+
		"e\u0011\u0001\u0000\u0000\u0000fg\u0006\t\uffff\uffff\u0000gh\u0005\u0007"+
		"\u0000\u0000hi\u0003\u0012\t\u0000ij\u0005\b\u0000\u0000jm\u0001\u0000"+
		"\u0000\u0000km\u0005\u001c\u0000\u0000lf\u0001\u0000\u0000\u0000lk\u0001"+
		"\u0000\u0000\u0000m{\u0001\u0000\u0000\u0000no\n\u0003\u0000\u0000op\u0003"+
		"\u0014\n\u0000pq\u0003\u0012\t\u0004qz\u0001\u0000\u0000\u0000ru\n\u0002"+
		"\u0000\u0000sv\u0003\u0016\u000b\u0000tv\u0003\u0018\f\u0000us\u0001\u0000"+
		"\u0000\u0000ut\u0001\u0000\u0000\u0000vw\u0001\u0000\u0000\u0000wx\u0003"+
		"\u0012\t\u0003xz\u0001\u0000\u0000\u0000yn\u0001\u0000\u0000\u0000yr\u0001"+
		"\u0000\u0000\u0000z}\u0001\u0000\u0000\u0000{y\u0001\u0000\u0000\u0000"+
		"{|\u0001\u0000\u0000\u0000|\u0013\u0001\u0000\u0000\u0000}{\u0001\u0000"+
		"\u0000\u0000~\u007f\u0005\u0010\u0000\u0000\u007f\u0015\u0001\u0000\u0000"+
		"\u0000\u0080\u0081\u0005\u0011\u0000\u0000\u0081\u0017\u0001\u0000\u0000"+
		"\u0000\u0082\u0083\u0005\u0012\u0000\u0000\u0083\u0019\u0001\u0000\u0000"+
		"\u0000\u0084\u0085\u0005\u0013\u0000\u0000\u0085\u0086\u0005\u0005\u0000"+
		"\u0000\u0086\u0087\u0005\u0019\u0000\u0000\u0087\u001b\u0001\u0000\u0000"+
		"\u0000\u0088\u0089\u0007\u0001\u0000\u0000\u0089\u001d\u0001\u0000\u0000"+
		"\u0000\u008a\u008b\u0005\u0007\u0000\u0000\u008b\u008c\u0005\u0019\u0000"+
		"\u0000\u008c\u008d\u0005\u000f\u0000\u0000\u008d\u008e\u0005\u001a\u0000"+
		"\u0000\u008e\u0093\u0005\b\u0000\u0000\u008f\u0090\u0005\u0007\u0000\u0000"+
		"\u0090\u0091\u0005\u0019\u0000\u0000\u0091\u0093\u0005\b\u0000\u0000\u0092"+
		"\u008a\u0001\u0000\u0000\u0000\u0092\u008f\u0001\u0000\u0000\u0000\u0093"+
		"\u001f\u0001\u0000\u0000\u0000\r#+CFJORdluy{\u0092";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}