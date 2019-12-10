@Override
public Socket accept(SocketHints hints) {
    try {
        return new NetJavaSocketImpl(server.accept(), hints);
    } catch (Exception e) {
        throw new GdxRuntimeException("Error accepting socket.", e);
    }
}
