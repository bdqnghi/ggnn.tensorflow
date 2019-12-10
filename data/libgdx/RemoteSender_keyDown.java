@Override
public boolean keyDown(int keycode) {
    synchronized (this) {
        if (!connected)
            return false;
    }
    try {
        out.writeInt(KEY_DOWN);
        out.writeInt(keycode);
    } catch (Throwable t) {
        synchronized (this) {
            connected = false;
        }
    }
    return false;
}
