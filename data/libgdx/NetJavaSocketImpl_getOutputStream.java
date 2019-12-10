@Override
public OutputStream getOutputStream() {
    try {
        return socket.getOutputStream();
    } catch (Exception e) {
        throw new GdxRuntimeException("Error getting output stream from socket.", e);
    }
}
