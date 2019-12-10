@Override
public boolean keyUp(int keycode) {
    synchronized (this) {
        if (!connected)
            return false;
    }
    try {
        out.writeInt(KEY_UP);
        out.writeInt(keycode);
    } catch (Throwable t) {
        synchronized (this) {
            connected = false;
        }
    }
    return false;
}
