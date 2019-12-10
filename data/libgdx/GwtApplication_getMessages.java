private String getMessages(Throwable e) {
    StringBuffer buffer = new StringBuffer();
    while (e != null) {
        buffer.append(e.getMessage() + "\n");
        e = e.getCause();
    }
    return buffer.toString();
}
