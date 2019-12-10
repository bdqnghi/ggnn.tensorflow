@Override
public float getPitch() {
    if (!compassAvailable)
        return 0;
    updateOrientation();
    return pitch;
}
