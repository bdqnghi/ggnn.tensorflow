protected LightProperties nextSpot() {
    if (!spotCameraIterator.hasNext())
        return null;
    ObjectMap.Entry<SpotLight, LightProperties> e = spotCameraIterator.next();
    currentLight = e.key;
    currentLightProperties = e.value;
    LightProperties lp = e.value;
    if (!lightFilter.filter(spotCameras.findKey(lp, true), lp.camera, this.camera)) {
        return nextSpot();
    }
    processViewport(lp, true);
    return lp;
}
