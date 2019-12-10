@Override
public float getAzimuth() {
    if (!compassSupported)
        return 0;
    return rotation[0];
}
