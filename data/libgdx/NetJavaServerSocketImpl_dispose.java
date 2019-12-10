@Override
public void dispose() {
    if (server != null) {
        try {
            server.close();
            server = null;
        } catch (Exception e) {
            throw new GdxRuntimeException("Error closing server.", e);
        }
    }
}
