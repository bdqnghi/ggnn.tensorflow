@Override
public float getAxis(int axisIndex) {
    if (axisIndex < 0 || axisIndex >= axes.length)
        return 0;
    return axes[axisIndex];
}
