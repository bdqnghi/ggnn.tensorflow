@Override
public void requestRendering() {
    synchronized (this) {
        requestRendering = true;
    }
}
