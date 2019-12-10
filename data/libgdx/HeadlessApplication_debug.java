@Override
public void debug(String tag, String message, Throwable exception) {
    if (logLevel >= LOG_DEBUG) {
        System.out.println(tag + ": " + message);
        exception.printStackTrace(System.out);
    }
}
