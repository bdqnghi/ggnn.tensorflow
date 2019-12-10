@Override
public void addLight(PointLight point, Set<CubemapSide> sides) {
    PointLightProperties plProperty = new PointLightProperties();
    for (int i = 0; i < 6; i++) {
        CubemapSide cubemapSide = Cubemap.CubemapSide.values()[i];
        if (sides.contains(cubemapSide)) {
            PerspectiveCamera camera = new PerspectiveCamera(90, 0, 0);
            camera.position.set(point.position);
            camera.direction.set(cubemapSide.direction);
            camera.up.set(cubemapSide.up);
            camera.near = 1;
            camera.far = 100;
            LightProperties p = new LightProperties(camera);
            plProperty.properties.put(cubemapSide, p);
        }
    }
    pointCameras.put(point, plProperty);
}
