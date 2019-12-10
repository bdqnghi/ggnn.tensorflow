@Override
public void error(String tag, String message, Throwable exception) {
    if (logLevel >= LOG_ERROR) {
        Foundation.log("%@", new NSString("[error] " + tag + ": " + message));
        exception.printStackTrace();
    }
}
