public void setValue(float value) {
    this.value = (int) (Math.max(min, Math.min(max, value)) / stepSize) * stepSize;
    repaint();
    if (listener != null)
        listener.stateChanged(new ChangeEvent(this));
}
