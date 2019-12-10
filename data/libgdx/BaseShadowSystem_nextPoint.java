protected LightProperties nextPoint() {
    if (!pointCameraIterator.hasNext() && currentPointSide > 5)
        return null;
    if (currentPointSide > 5)
        currentPointSide = 0;
    if (currentPointSide == 0) {
        ObjectMap.Entry<PointLight, PointLightProperties> e = pointCameraIterator.next();
        currentLight = e.key;
        currentPointProperties = e.value;
    }
    if (currentPointProperties.properties.containsKey(Cubemap.CubemapSide.values()[currentPointSide])) {
        LightProperties lp = currentPointProperties.properties.get(Cubemap.CubemapSide.values()[currentPointSide]);
        currentLightProperties = lp;
        currentPointSide += 1;
        if (!lightFilter.filter(pointCameras.findKey(currentPointProperties, true), lp.camera, this.camera)) {
            return nextPoint();
        }
        processViewport(lp, true);
        return lp;
    }
    currentPointSide += 1;
    return nextPoint();
}
