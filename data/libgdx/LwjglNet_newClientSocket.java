@Override
public Socket newClientSocket(Protocol protocol, String host, int port, SocketHints hints) {
    return new NetJavaSocketImpl(protocol, host, port, hints);
}
