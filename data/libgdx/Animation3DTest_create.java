@Override
public void create() {
    super.create();
    lights = new Environment();
    lights.set(new ColorAttribute(ColorAttribute.AmbientLight, 0.4f, 0.4f, 0.4f, 1.f));
    lights.add((shadowLight = new DirectionalShadowLight(1024, 1024, 30f, 30f, 1f, 100f)).set(0.8f, 0.8f, 0.8f, -.4f, -.4f, -.4f));
    lights.shadowMap = shadowLight;
    inputController.rotateLeftKey = inputController.rotateRightKey = inputController.forwardKey = inputController.backwardKey = 0;
    cam.position.set(25, 25, 25);
    cam.lookAt(0, 0, 0);
    cam.update();
    modelsWindow.setVisible(false);
    assets.load("data/g3d/skydome.g3db", Model.class);
    assets.load("data/g3d/concrete.png", Texture.class);
    assets.load("data/tree.png", Texture.class);
    loading = true;
    trForward.translation.set(0, 0, 8f);
    trBackward.translation.set(0, 0, -8f);
    trLeft.rotation.setFromAxis(Vector3.Y, 90);
    trRight.rotation.setFromAxis(Vector3.Y, -90);
    ModelBuilder builder = new ModelBuilder();
    builder.begin();
    builder.node().id = "floor";
    MeshPartBuilder part = builder.part("floor", GL20.GL_TRIANGLES, Usage.Position | Usage.TextureCoordinates | Usage.Normal, new Material("concrete"));
    ((MeshBuilder) part).ensureRectangles(1600);
    for (float x = -200f; x < 200f; x += 10f) {
        for (float z = -200f; z < 200f; z += 10f) {
            part.rect(x, 0, z + 10f, x + 10f, 0, z + 10f, x + 10f, 0, z, x, 0, z, 0, 1, 0);
        }
    }
    builder.node().id = "tree";
    part = builder.part("tree", GL20.GL_TRIANGLES, Usage.Position | Usage.TextureCoordinates | Usage.Normal, new Material("tree"));
    part.rect(0f, 0f, -10f, 10f, 0f, -10f, 10f, 10f, -10f, 0f, 10f, -10f, 0, 0, 1f);
    part.setUVRange(1, 0, 0, 1);
    part.rect(10f, 0f, -10f, 0f, 0f, -10f, 0f, 10f, -10f, 10f, 10f, -10f, 0, 0, -1f);
    floorModel = builder.end();
    shadowBatch = new ModelBatch(new DepthShaderProvider());
}
