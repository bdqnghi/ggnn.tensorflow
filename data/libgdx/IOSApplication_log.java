@Override
public void log(String tag, String message, Throwable exception) {
    if (logLevel > LOG_NONE) {
        Foundation.log("%@", new NSString("[info] " + tag + ": " + message));
        exception.printStackTrace();
    }
}
