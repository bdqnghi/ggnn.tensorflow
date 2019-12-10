private InputStream getInputStream() {
    try {
        return connection.getInputStream();
    } catch (IOException e) {
        return connection.getErrorStream();
    }
}
