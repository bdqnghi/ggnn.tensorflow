@Override
public void create() {
    super.create();
    environment = new Environment();
    environment.set(new ColorAttribute(ColorAttribute.AmbientLight, 0.4f, 0.4f, 0.4f, 1.f));
    environment.add(new DirectionalLight().set(0.8f, 0.8f, 0.8f, -0.5f, -1.0f, -0.8f));
    texture = new Texture(Gdx.files.internal("data/badlogic.jpg"));
    int w = 20, h = 20;
    Pixmap data = new Pixmap(Gdx.files.internal("data/g3d/heightmap.png"));
    field = new HeightField(true, data, true, Usage.Position | Usage.Normal | Usage.ColorUnpacked | Usage.TextureCoordinates);
    data.dispose();
    field.corner00.set(-10f, 0, -10f);
    field.corner10.set(10f, 0, -10f);
    field.corner01.set(-10f, 0, 10f);
    field.corner11.set(10f, 0, 10f);
    field.color00.set(0, 0, 1, 1);
    field.color01.set(0, 1, 1, 1);
    field.color10.set(1, 0, 1, 1);
    field.color11.set(1, 1, 1, 1);
    field.magnitude.set(0f, 5f, 0f);
    field.update();
    ground = new Renderable();
    ground.environment = environment;
    ground.meshPart.mesh = field.mesh;
    ground.meshPart.primitiveType = GL20.GL_TRIANGLES;
    ground.meshPart.offset = 0;
    ground.meshPart.size = field.mesh.getNumIndices();
    ground.meshPart.update();
    ground.material = new Material(TextureAttribute.createDiffuse(texture));
}
