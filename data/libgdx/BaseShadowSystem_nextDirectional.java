protected LightProperties nextDirectional() {
    if (!dirCameraIterator.hasNext())
        return null;
    ObjectMap.Entry<DirectionalLight, LightProperties> e = dirCameraIterator.next();
    currentLight = e.key;
    currentLightProperties = e.value;
    LightProperties lp = e.value;
    processViewport(lp, false);
    return lp;
}
