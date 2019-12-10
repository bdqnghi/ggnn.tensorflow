@Override
public void create() {
    super.create();
    camFb = new PerspectiveCamera(90, 800, 800);
    camFb.position.set(10f, 10f, 10f);
    camFb.lookAt(0, 0, 0);
    camFb.near = 0.1f;
    camFb.far = 1000f;
    camFb.update();
    fb = new FrameBufferCubemap(Format.RGBA8888, 800, 800, true);
    ObjLoader objLoader = new ObjLoader();
    cubeMesh = objLoader.loadModel(Gdx.files.internal("data/cube.obj"));
    cubeInstance = new ModelInstance(cubeMesh);
    cubeBatch = new ModelBatch(Gdx.files.internal("data/shaders/cubemap-vert.glsl"), Gdx.files.internal("data/shaders/cubemap-frag.glsl"));
    cubeMesh.materials.get(0).set(new CubemapAttribute(CubemapAttribute.EnvironmentMap, cubemap));
    camCube = new PerspectiveCamera(67, Gdx.graphics.getWidth() * 0.5f, Gdx.graphics.getHeight() * 0.5f);
    camCube.position.set(0f, 2f, 2f);
    camCube.lookAt(0, 0, 0);
    camCube.near = 1f;
    camCube.far = 300f;
    camCube.update();
}
