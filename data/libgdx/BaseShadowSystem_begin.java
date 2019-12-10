@Override
public void begin(int n) {
    if (n >= passShaderProviders.length)
        throw new GdxRuntimeException("Pass " + n + " doesn't exist in " + getClass().getName());
    currentPass = n;
    spotCameraIterator = spotCameras.iterator();
    dirCameraIterator = dirCameras.iterator();
    pointCameraIterator = pointCameras.iterator();
    currentPointSide = 6;
    beginPass(n);
}
