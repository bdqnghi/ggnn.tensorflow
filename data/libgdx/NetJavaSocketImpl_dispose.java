@Override
public void dispose() {
    if (socket != null) {
        try {
            socket.close();
            socket = null;
        } catch (Exception e) {
            throw new GdxRuntimeException("Error closing socket.", e);
        }
    }
}
