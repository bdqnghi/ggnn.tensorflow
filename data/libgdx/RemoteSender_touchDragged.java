@Override
public boolean touchDragged(int x, int y, int pointer) {
    synchronized (this) {
        if (!connected)
            return false;
    }
    try {
        out.writeInt(TOUCH_DRAGGED);
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
