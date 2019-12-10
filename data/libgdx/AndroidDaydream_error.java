@Override
public void error(String tag, String message, Throwable exception) {
    if (logLevel >= LOG_ERROR)
        Log.e(tag, message, exception);
}
