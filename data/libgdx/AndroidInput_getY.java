@Override
public int getY(int pointer) {
    synchronized (this) {
        return touchY[pointer];
    }
}
