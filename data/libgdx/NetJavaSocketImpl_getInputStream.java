@Override
public InputStream getInputStream() {
    try {
        return socket.getInputStream();
    } catch (Exception e) {
        throw new GdxRuntimeException("Error getting input stream from socket.", e);
    }
}
