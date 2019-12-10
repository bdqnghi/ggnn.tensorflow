@Override
public void error(String tag, String message, Throwable exception) {
    if (logLevel >= LOG_ERROR) {
        checkLogLabel();
        log.setText(log.getText() + "\n" + tag + ": " + message + "\n" + getMessages(exception) + "\n");
        log.setCursorPos(log.getText().length() - 1);
        System.err.println(tag + ": " + message + "\n" + exception.getMessage() + "\n");
        System.out.println(getStackTrace(exception));
    }
}
