@Override
public float getPitch() {
    if (!compassSupported)
        return 0;
    return rotation[1];
}
