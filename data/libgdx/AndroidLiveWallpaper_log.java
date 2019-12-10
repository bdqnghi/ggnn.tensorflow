@Override
public void log(String tag, String message, Throwable exception) {
    if (logLevel >= LOG_INFO)
        Log.i(tag, message, exception);
}
