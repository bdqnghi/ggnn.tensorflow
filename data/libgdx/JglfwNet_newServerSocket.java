public ServerSocket newServerSocket(Protocol protocol, int port, ServerSocketHints hints) {
    return new NetJavaServerSocketImpl(protocol, port, hints);
}
