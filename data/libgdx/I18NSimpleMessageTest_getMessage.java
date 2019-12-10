private String getMessage(String header, I18NBundle rb) {
    return header + " -> locale: " + rb.getLocale() + ", msg: \"" + rb.format("msg") + "\", rootMsg: \"" + rb.format("rootMsg") + "\"";
}
