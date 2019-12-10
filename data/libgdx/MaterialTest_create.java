@Override
public void create() {
    texture = new Texture(Gdx.files.internal("data/badlogic.jpg"), true);
    // Create material attributes. Each material can contain x-number of attributes.
    textureAttribute = new TextureAttribute(TextureAttribute.Diffuse, texture);
    colorAttribute = new ColorAttribute(ColorAttribute.Diffuse, Color.ORANGE);
    blendingAttribute = new BlendingAttribute(GL20.GL_SRC_ALPHA, GL20.GL_ONE_MINUS_SRC_ALPHA);
    ModelBuilder builder = new ModelBuilder();
    model = builder.createBox(1, 1, 1, new Material(), Usage.Position | Usage.Normal | Usage.TextureCoordinates);
    model.manageDisposable(texture);
    modelInstance = new ModelInstance(model);
    modelInstance.transform.rotate(Vector3.X, 45);
    material = modelInstance.materials.get(0);
    builder.begin();
    MeshPartBuilder mpb = builder.part("back", GL20.GL_TRIANGLES, Usage.Position | Usage.TextureCoordinates, new Material(textureAttribute));
    mpb.rect(-2, -2, -2, 2, -2, -2, 2, 2, -2, -2, 2, -2, 0, 0, 1);
    backModel = builder.end();
    background = new ModelInstance(backModel);
    modelBatch = new ModelBatch();
    camera = new PerspectiveCamera(45, 4, 4);
    camera.position.set(0, 0, 3);
    camera.direction.set(0, 0, -1);
    camera.update();
    Gdx.input.setInputProcessor(this);
}
