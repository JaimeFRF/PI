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
		T__9=10, T__10=11, T__11=12, T__12=13, T__13=14, STRING=15, INT=16, FLOAT=17, 
		WS=18, VARIABLE=19;
	public static final int
		RULE_dsl = 0, RULE_command = 1, RULE_loadImageCommand = 2, RULE_showImageCommand = 3, 
		RULE_assignementCommand = 4, RULE_operation = 5, RULE_operationType = 6, 
		RULE_blurType = 7, RULE_blurOptions = 8, RULE_options = 9;
	private static String[] makeRuleNames() {
		return new String[] {
			"dsl", "command", "loadImageCommand", "showImageCommand", "assignementCommand", 
			"operation", "operationType", "blurType", "blurOptions", "options"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'load'", "'from'", "';'", "'show'", "'='", "'on'", "'('", "')'", 
			"'binarization'", "'gaussianBlur'", "'bilateralBlur'", "'medianBlur'", 
			"'with size'", "','"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
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
			setState(23);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & 524306L) != 0)) {
				{
				{
				setState(20);
				command();
				}
				}
				setState(25);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(26);
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
			setState(31);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__0:
				enterOuterAlt(_localctx, 1);
				{
				setState(28);
				loadImageCommand();
				}
				break;
			case T__3:
				enterOuterAlt(_localctx, 2);
				{
				setState(29);
				showImageCommand();
				}
				break;
			case VARIABLE:
				enterOuterAlt(_localctx, 3);
				{
				setState(30);
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
			setState(33);
			match(T__0);
			setState(34);
			match(VARIABLE);
			setState(35);
			match(T__1);
			setState(36);
			((LoadImageCommandContext)_localctx).path = match(STRING);
			setState(37);
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
			setState(39);
			match(T__3);
			setState(40);
			match(VARIABLE);
			setState(41);
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
			setState(43);
			match(VARIABLE);
			setState(44);
			match(T__4);
			setState(45);
			operation();
			setState(46);
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
		public OperationContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_operation; }
	}

	public final OperationContext operation() throws RecognitionException {
		OperationContext _localctx = new OperationContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_operation);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(48);
			operationType();
			setState(49);
			match(T__5);
			setState(55);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case VARIABLE:
				{
				setState(50);
				match(VARIABLE);
				}
				break;
			case T__6:
				{
				setState(51);
				match(T__6);
				setState(52);
				operation();
				setState(53);
				match(T__7);
				}
				break;
			default:
				throw new NoViableAltException(this);
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
	public static class OperationTypeContext extends ParserRuleContext {
		public BlurOptionsContext blurOpts;
		public BlurTypeContext blurType() {
			return getRuleContext(BlurTypeContext.class,0);
		}
		public BlurOptionsContext blurOptions() {
			return getRuleContext(BlurOptionsContext.class,0);
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
			setState(62);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__9:
			case T__10:
			case T__11:
				enterOuterAlt(_localctx, 1);
				{
				setState(57);
				blurType();
				setState(59);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==T__6 || _la==T__12) {
					{
					setState(58);
					((OperationTypeContext)_localctx).blurOpts = blurOptions();
					}
				}

				}
				break;
			case T__8:
				enterOuterAlt(_localctx, 2);
				{
				setState(61);
				match(T__8);
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
			setState(64);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & 7168L) != 0)) ) {
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
			setState(80);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,5,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(66);
				match(T__12);
				setState(67);
				match(T__6);
				setState(68);
				((BlurOptionsContext)_localctx).size1 = match(INT);
				setState(69);
				match(T__13);
				setState(70);
				((BlurOptionsContext)_localctx).size2 = match(INT);
				setState(71);
				match(T__7);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(72);
				match(T__6);
				setState(73);
				((BlurOptionsContext)_localctx).ksize = match(INT);
				setState(74);
				match(T__7);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(75);
				match(T__6);
				setState(76);
				((BlurOptionsContext)_localctx).ksize = match(INT);
				setState(77);
				match(T__13);
				setState(78);
				((BlurOptionsContext)_localctx).sigma = match(INT);
				setState(79);
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
		enterRule(_localctx, 18, RULE_options);
		try {
			setState(90);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(82);
				match(T__6);
				setState(83);
				((OptionsContext)_localctx).size = match(INT);
				setState(84);
				match(T__13);
				setState(85);
				((OptionsContext)_localctx).sigma = match(FLOAT);
				setState(86);
				match(T__7);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(87);
				match(T__6);
				setState(88);
				((OptionsContext)_localctx).size = match(INT);
				setState(89);
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

	public static final String _serializedATN =
		"\u0004\u0001\u0013]\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0002"+
		"\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004\u0007\u0004\u0002"+
		"\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007\u0007\u0007\u0002"+
		"\b\u0007\b\u0002\t\u0007\t\u0001\u0000\u0005\u0000\u0016\b\u0000\n\u0000"+
		"\f\u0000\u0019\t\u0000\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0003\u0001 \b\u0001\u0001\u0002\u0001\u0002\u0001\u0002"+
		"\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004"+
		"\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0003\u00058\b\u0005\u0001\u0006\u0001\u0006\u0003\u0006"+
		"<\b\u0006\u0001\u0006\u0003\u0006?\b\u0006\u0001\u0007\u0001\u0007\u0001"+
		"\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001"+
		"\b\u0001\b\u0001\b\u0001\b\u0001\b\u0003\bQ\b\b\u0001\t\u0001\t\u0001"+
		"\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0003\t[\b\t\u0001\t\u0000"+
		"\u0000\n\u0000\u0002\u0004\u0006\b\n\f\u000e\u0010\u0012\u0000\u0001\u0001"+
		"\u0000\n\f[\u0000\u0017\u0001\u0000\u0000\u0000\u0002\u001f\u0001\u0000"+
		"\u0000\u0000\u0004!\u0001\u0000\u0000\u0000\u0006\'\u0001\u0000\u0000"+
		"\u0000\b+\u0001\u0000\u0000\u0000\n0\u0001\u0000\u0000\u0000\f>\u0001"+
		"\u0000\u0000\u0000\u000e@\u0001\u0000\u0000\u0000\u0010P\u0001\u0000\u0000"+
		"\u0000\u0012Z\u0001\u0000\u0000\u0000\u0014\u0016\u0003\u0002\u0001\u0000"+
		"\u0015\u0014\u0001\u0000\u0000\u0000\u0016\u0019\u0001\u0000\u0000\u0000"+
		"\u0017\u0015\u0001\u0000\u0000\u0000\u0017\u0018\u0001\u0000\u0000\u0000"+
		"\u0018\u001a\u0001\u0000\u0000\u0000\u0019\u0017\u0001\u0000\u0000\u0000"+
		"\u001a\u001b\u0005\u0000\u0000\u0001\u001b\u0001\u0001\u0000\u0000\u0000"+
		"\u001c \u0003\u0004\u0002\u0000\u001d \u0003\u0006\u0003\u0000\u001e "+
		"\u0003\b\u0004\u0000\u001f\u001c\u0001\u0000\u0000\u0000\u001f\u001d\u0001"+
		"\u0000\u0000\u0000\u001f\u001e\u0001\u0000\u0000\u0000 \u0003\u0001\u0000"+
		"\u0000\u0000!\"\u0005\u0001\u0000\u0000\"#\u0005\u0013\u0000\u0000#$\u0005"+
		"\u0002\u0000\u0000$%\u0005\u000f\u0000\u0000%&\u0005\u0003\u0000\u0000"+
		"&\u0005\u0001\u0000\u0000\u0000\'(\u0005\u0004\u0000\u0000()\u0005\u0013"+
		"\u0000\u0000)*\u0005\u0003\u0000\u0000*\u0007\u0001\u0000\u0000\u0000"+
		"+,\u0005\u0013\u0000\u0000,-\u0005\u0005\u0000\u0000-.\u0003\n\u0005\u0000"+
		"./\u0005\u0003\u0000\u0000/\t\u0001\u0000\u0000\u000001\u0003\f\u0006"+
		"\u000017\u0005\u0006\u0000\u000028\u0005\u0013\u0000\u000034\u0005\u0007"+
		"\u0000\u000045\u0003\n\u0005\u000056\u0005\b\u0000\u000068\u0001\u0000"+
		"\u0000\u000072\u0001\u0000\u0000\u000073\u0001\u0000\u0000\u00008\u000b"+
		"\u0001\u0000\u0000\u00009;\u0003\u000e\u0007\u0000:<\u0003\u0010\b\u0000"+
		";:\u0001\u0000\u0000\u0000;<\u0001\u0000\u0000\u0000<?\u0001\u0000\u0000"+
		"\u0000=?\u0005\t\u0000\u0000>9\u0001\u0000\u0000\u0000>=\u0001\u0000\u0000"+
		"\u0000?\r\u0001\u0000\u0000\u0000@A\u0007\u0000\u0000\u0000A\u000f\u0001"+
		"\u0000\u0000\u0000BC\u0005\r\u0000\u0000CD\u0005\u0007\u0000\u0000DE\u0005"+
		"\u0010\u0000\u0000EF\u0005\u000e\u0000\u0000FG\u0005\u0010\u0000\u0000"+
		"GQ\u0005\b\u0000\u0000HI\u0005\u0007\u0000\u0000IJ\u0005\u0010\u0000\u0000"+
		"JQ\u0005\b\u0000\u0000KL\u0005\u0007\u0000\u0000LM\u0005\u0010\u0000\u0000"+
		"MN\u0005\u000e\u0000\u0000NO\u0005\u0010\u0000\u0000OQ\u0005\b\u0000\u0000"+
		"PB\u0001\u0000\u0000\u0000PH\u0001\u0000\u0000\u0000PK\u0001\u0000\u0000"+
		"\u0000Q\u0011\u0001\u0000\u0000\u0000RS\u0005\u0007\u0000\u0000ST\u0005"+
		"\u0010\u0000\u0000TU\u0005\u000e\u0000\u0000UV\u0005\u0011\u0000\u0000"+
		"V[\u0005\b\u0000\u0000WX\u0005\u0007\u0000\u0000XY\u0005\u0010\u0000\u0000"+
		"Y[\u0005\b\u0000\u0000ZR\u0001\u0000\u0000\u0000ZW\u0001\u0000\u0000\u0000"+
		"[\u0013\u0001\u0000\u0000\u0000\u0007\u0017\u001f7;>PZ";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}