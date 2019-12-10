private void axisMoved(int axisIndex, int value) {
    // -1 to 1
    axes[axisIndex] = ((value - MIN_AXIS) << 1) / (float) (MAX_AXIS - MIN_AXIS) - 1;
    if (listener != null)
        listener.axisMoved(this, axisIndex, axes[axisIndex]);
}
