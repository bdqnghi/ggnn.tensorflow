@Override
public void create() {
    camera = new PerspectiveCamera(67, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    camera.position.set(0, 1.5f, 1.5f);
    camera.lookAt(0, 0, 0);
    camera.update();
    controller = new PerspectiveCamController(camera);
    mesh = new Mesh(true, 4, 4, new VertexAttribute(Usage.Position, 3, ShaderProgram.POSITION_ATTRIBUTE), new VertexAttribute(Usage.TextureCoordinates, 2, ShaderProgram.TEXCOORD_ATTRIBUTE));
    mesh.setVertices(new float[] { -1, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, -1, 1, 0, -1, 0, -1, 0, 0 });
    mesh.setIndices(new short[] { 0, 1, 2, 3 });
    shader = new ShaderProgram(Gdx.files.internal("data/shaders/flattex-vert.glsl").readString(), Gdx.files.internal("data/shaders/flattex-frag.glsl").readString());
    if (!shader.isCompiled())
        throw new GdxRuntimeException("shader error: " + shader.getLog());
    textureHW = new Texture(Gdx.files.internal("data/badlogic.jpg"), Format.RGB565, true);
    MipMapGenerator.setUseHardwareMipMap(false);
    textureSW = new Texture(Gdx.files.internal("data/badlogic.jpg"), Format.RGB565, true);
    currTexture = textureHW;
    createUI();
    multiplexer = new InputMultiplexer();
    Gdx.input.setInputProcessor(multiplexer);
    multiplexer.addProcessor(ui);
    multiplexer.addProcessor(controller);
}
