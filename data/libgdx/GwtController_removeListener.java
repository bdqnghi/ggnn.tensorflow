@Override
public void removeListener(ControllerListener listener) {
    this.listeners.removeValue(listener, true);
}
