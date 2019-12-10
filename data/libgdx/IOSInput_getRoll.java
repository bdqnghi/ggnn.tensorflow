@Override
public float getRoll() {
    if (!compassSupported)
        return 0;
    return rotation[2];
}
