@Override
public boolean touchUp(int x, int y, int pointer, int button) {
    synchronized (this) {
        if (!connected)
            return false;
    }
    try {
        out.writeInt(TOUCH_UP);
        out.writeInt(x);
        out.writeInt(y);
        out.writeInt(pointer);
    } catch (Throwable t) {
        synchronized (this) {
            connected = false;
        }
    }
    return false;
}
