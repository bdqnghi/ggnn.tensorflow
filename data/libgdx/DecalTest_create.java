@Override
public void create() {
    Gdx.gl.glEnable(GL20.GL_DEPTH_TEST);
    Gdx.gl.glDepthFunc(GL20.GL_LESS);
    egg = new Texture(Gdx.files.internal("data/egg.png"));
    egg.setFilter(Texture.TextureFilter.Linear, Texture.TextureFilter.Linear);
    egg.setWrap(Texture.TextureWrap.ClampToEdge, Texture.TextureWrap.ClampToEdge);
    wheel = new Texture(Gdx.files.internal("data/wheel.png"));
    wheel.setFilter(Texture.TextureFilter.Linear, Texture.TextureFilter.Linear);
    wheel.setWrap(Texture.TextureWrap.ClampToEdge, Texture.TextureWrap.ClampToEdge);
    w = Gdx.graphics.getWidth() / 0.8f;
    h = Gdx.graphics.getHeight() / 0.8f;
    for (int i = 0; i < INITIAL_RENDERED; i++) {
        toRender.add(makeDecal());
    }
    cam = new OrthographicCamera(Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    cam.near = 0.1f;
    cam.far = 10f;
    cam.position.set(0, 0, 0.1f);
    cam.direction.set(0, 0, -1f);
    batch = new DecalBatch(new CameraGroupStrategy(cam));
    Gdx.gl.glClearColor(1, 1, 0, 1);
}
