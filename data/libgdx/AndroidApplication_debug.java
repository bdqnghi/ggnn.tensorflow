@Override
public void debug(String tag, String message, Throwable exception) {
    if (logLevel >= LOG_DEBUG) {
        Log.d(tag, message, exception);
    }
}
