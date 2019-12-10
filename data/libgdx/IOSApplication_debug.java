@Override
public void debug(String tag, String message, Throwable exception) {
    if (logLevel >= LOG_DEBUG) {
        Foundation.log("%@", new NSString("[debug] " + tag + ": " + message));
        exception.printStackTrace();
    }
}
