public void setEnvironment(String name) {
    if (name == null)
        return;
    if (cubemap != null) {
        cubemap.dispose();
        cubemap = null;
    }
    if (name.equals("<none>")) {
        if (environment.has(CubemapAttribute.EnvironmentMap)) {
            environment.remove(CubemapAttribute.EnvironmentMap);
            shaderProvider.clear();
        }
    } else {
        FileHandle root = Gdx.files.internal("data/g3d/environment");
        FacedCubemapData faces = new FacedCubemapData(root.child(name + "_PX.png"), root.child(name + "_NX.png"), root.child(name + "_PY.png"), root.child(name + "_NY.png"), root.child(name + "_PZ.png"), root.child(name + "_NZ.png"), // FIXME mipmapping on desktop
        false);
        cubemap = new Cubemap(faces);
        faces.load(CubemapSide.NegativeX, root.child(name + "_NX.png"));
        cubemap.load(faces);
        if (!environment.has(CubemapAttribute.EnvironmentMap))
            shaderProvider.clear();
        environment.set(new CubemapAttribute(CubemapAttribute.EnvironmentMap, cubemap));
    }
}
