@Override
public boolean keyTyped(char character) {
    String DEBUGGER_DISABLED_MESSAGE = "Error will be detected after enabling the debugger";
    switch(character) {
        case 'e':
            GLProfiler.enable();
            message = "GLProfiler enabled (isEnabled(): " + GLProfiler.isEnabled() + ")";
            break;
        case 'd':
            GLProfiler.disable();
            message = "GLProfiler disabled (isEnabled(): " + GLProfiler.isEnabled() + ")";
            break;
        case 'l':
            GLProfiler.listener = GLErrorListener.LOGGING_LISTENER;
            makeGlError = true;
            if (GLProfiler.isEnabled()) {
                message = "Log should contain info about error, which happened in glClear.";
            } else {
                message = DEBUGGER_DISABLED_MESSAGE;
            }
            break;
        case 't':
            GLProfiler.listener = GLErrorListener.THROWING_LISTENER;
            makeGlError = true;
            if (GLProfiler.isEnabled()) {
                message = "This should be soon replaced with info about caught exception.";
            } else {
                message = DEBUGGER_DISABLED_MESSAGE;
            }
            break;
        case 'c':
            GLProfiler.listener = customListener;
            makeGlError = true;
            if (GLProfiler.isEnabled()) {
                message = "This should be soon replaced about info about success.";
            } else {
                message = DEBUGGER_DISABLED_MESSAGE;
            }
            break;
        default:
            return false;
    }
    return true;
}
