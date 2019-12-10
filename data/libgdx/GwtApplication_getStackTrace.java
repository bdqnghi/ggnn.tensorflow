private String getStackTrace(Throwable e) {
    StringBuffer buffer = new StringBuffer();
    for (StackTraceElement trace : e.getStackTrace()) {
        buffer.append(trace.toString() + "\n");
    }
    return buffer.toString();
}
