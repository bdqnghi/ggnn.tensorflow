@Override
public void create() {
    modelBatch = new ModelBatch(new DefaultShaderProvider() {

        @Override
        protected Shader createShader(Renderable renderable) {
            if (renderable.material.has(TestAttribute.ID))
                return new TestShader(renderable);
            return super.createShader(renderable);
        }
    });
    cam = new PerspectiveCamera(67, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    cam.position.set(0f, 0f, 20f);
    cam.lookAt(0, 0, 0);
    cam.near = 1f;
    cam.far = 300f;
    cam.update();
    camController = new CameraInputController(cam);
    Gdx.input.setInputProcessor(camController);
    Material testMaterial1 = new Material("TestMaterial1", new TestAttribute(1f));
    Material redMaterial = new Material("RedMaterial", ColorAttribute.createDiffuse(Color.RED));
    Material testMaterial2 = new Material("TestMaterial2", new TestAttribute(1f), ColorAttribute.createDiffuse(Color.BLUE));
    ModelBuilder builder = new ModelBuilder();
    Node node;
    builder.begin();
    node = builder.node();
    node.id = "testCone1";
    node.translation.set(-10, 0f, 0f);
    builder.part("testCone", GL20.GL_TRIANGLES, Usage.Position, testMaterial1).cone(5, 5, 5, 20);
    node = builder.node();
    node.id = "redSphere";
    builder.part("redSphere", GL20.GL_TRIANGLES, Usage.Position, redMaterial).sphere(5, 5, 5, 20, 20);
    node = builder.node();
    node.id = "testCone1";
    node.translation.set(10, 0f, 0f);
    builder.part("testCone", GL20.GL_TRIANGLES, Usage.Position, testMaterial2).cone(5, 5, 5, 20);
    model = builder.end();
    ModelInstance modelInstance;
    modelInstance = new ModelInstance(model);
    testAttribute1 = (TestAttribute) modelInstance.getMaterial("TestMaterial1").get(TestAttribute.ID);
    testAttribute2 = (TestAttribute) modelInstance.getMaterial("TestMaterial2").get(TestAttribute.ID);
    instances.add(modelInstance);
}
