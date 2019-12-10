@Override
public void log(String tag, String message, Throwable exception) {
    if (logLevel >= LOG_INFO) {
        checkLogLabel();
        log.setText(log.getText() + "\n" + tag + ": " + message + "\n" + getMessages(exception) + "\n");
        log.setCursorPos(log.getText().length() - 1);
        System.out.println(tag + ": " + message + "\n" + exception.getMessage());
        System.out.println(getStackTrace(exception));
    }
}
