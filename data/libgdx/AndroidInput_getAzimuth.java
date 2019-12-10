@Override
public float getAzimuth() {
    if (!compassAvailable)
        return 0;
    updateOrientation();
    return azimuth;
}
