@Override
public void error(String tag, String message, Throwable exception) {
    if (logLevel >= LOG_ERROR) {
        System.err.println(tag + ": " + message);
        exception.printStackTrace(System.err);
    }
}
