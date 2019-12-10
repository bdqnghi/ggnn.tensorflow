public void create() {
    ShaderProgram.pedantic = false;
    /*
		 * shader = new ShaderProgram(Gdx.files.internal("data/shaders/default.vert").readString(), Gdx.files.internal(
		 * "data/shaders/depthtocolor.frag").readString()); if (!shader.isCompiled()) { Gdx.app.log("EdgeDetectionTest",
		 * "couldn't compile scene shader: " + shader.getLog()); }
		 */
    batchShader = new ShaderProgram(Gdx.files.internal("data/shaders/batch.vert").readString(), Gdx.files.internal("data/shaders/convolution.frag").readString());
    if (!batchShader.isCompiled()) {
        Gdx.app.log("EdgeDetectionTest", "couldn't compile post-processing shader: " + batchShader.getLog());
    }
    ObjLoader objLoader = new ObjLoader();
    scene = objLoader.loadModel(Gdx.files.internal("data/scene.obj"));
    sceneInstance = new ModelInstance(scene);
    modelBatch = new ModelBatch();
    fbo = new FrameBuffer(Format.RGB565, Gdx.graphics.getWidth(), Gdx.graphics.getHeight(), true);
    cam = new PerspectiveCamera(67, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    cam.position.set(0, 0, 10);
    cam.lookAt(0, 0, 0);
    cam.far = 30;
    batch = new SpriteBatch();
    batch.setShader(batchShader);
    fboRegion = new TextureRegion(fbo.getColorBufferTexture());
    fboRegion.flip(false, true);
    logger = new FPSLogger();
    calculateOffsets();
}
