@Override
public void log(String tag, String message, Throwable exception) {
    if (logLevel >= LOG_INFO) {
        System.out.println(tag + ": " + message);
        exception.printStackTrace(System.out);
    }
}
