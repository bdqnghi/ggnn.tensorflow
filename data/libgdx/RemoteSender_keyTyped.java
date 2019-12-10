@Override
public boolean keyTyped(char character) {
    synchronized (this) {
        if (!connected)
            return false;
    }
    try {
        out.writeInt(KEY_TYPED);
        out.writeChar(character);
    } catch (Throwable t) {
        synchronized (this) {
            connected = false;
        }
    }
    return false;
}
