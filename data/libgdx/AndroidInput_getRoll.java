@Override
public float getRoll() {
    if (!compassAvailable)
        return 0;
    updateOrientation();
    return roll;
}
