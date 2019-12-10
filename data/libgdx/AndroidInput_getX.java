@Override
public int getX(int pointer) {
    synchronized (this) {
        return touchX[pointer];
    }
}
