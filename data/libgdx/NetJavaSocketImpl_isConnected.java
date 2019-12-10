@Override
public boolean isConnected() {
    if (socket != null) {
        return socket.isConnected();
    } else {
        return false;
    }
}
