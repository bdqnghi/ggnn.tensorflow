@Override
public void update() {
    for (ObjectMap.Entry<SpotLight, LightProperties> e : spotCameras) {
        e.value.camera.position.set(e.key.position);
        e.value.camera.direction.set(e.key.direction);
        nearFarAnalyzer.analyze(e.key, e.value.camera, renderableProviders);
    }
    for (ObjectMap.Entry<DirectionalLight, LightProperties> e : dirCameras) {
        directionalAnalyzer.analyze(e.key, e.value.camera, camera).update();
    }
    for (ObjectMap.Entry<PointLight, PointLightProperties> e : pointCameras) {
        for (ObjectMap.Entry<CubemapSide, LightProperties> c : e.value.properties) {
            c.value.camera.position.set(e.key.position);
            nearFarAnalyzer.analyze(e.key, c.value.camera, renderableProviders);
        }
    }
}
