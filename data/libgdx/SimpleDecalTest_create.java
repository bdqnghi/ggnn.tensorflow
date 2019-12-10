public void create() {
    float width = Gdx.graphics.getWidth();
    float height = Gdx.graphics.getHeight();
    camera = new PerspectiveCamera(45, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    camera.near = 1;
    camera.far = 300;
    camera.position.set(0, 0, 5);
    controller = new PerspectiveCamController(camera);
    Gdx.input.setInputProcessor(controller);
    batch = new DecalBatch(new CameraGroupStrategy(camera));
    TextureRegion[] textures = { new TextureRegion(new Texture(Gdx.files.internal("data/egg.png"))), new TextureRegion(new Texture(Gdx.files.internal("data/wheel.png"))), new TextureRegion(new Texture(Gdx.files.internal("data/badlogic.jpg"))) };
    Decal decal = Decal.newDecal(1, 1, textures[1]);
    decal.setPosition(0, 0, 0);
    decals.add(decal);
    decal = Decal.newDecal(1, 1, textures[0], true);
    decal.setPosition(0.5f, 0.5f, 1);
    decals.add(decal);
    decal = Decal.newDecal(1, 1, textures[0], true);
    decal.setPosition(1, 1, -1);
    decals.add(decal);
    decal = Decal.newDecal(1, 1, textures[2]);
    decal.setPosition(1.5f, 1.5f, -2);
    decals.add(decal);
    decal = Decal.newDecal(1, 1, textures[1]);
    decal.setPosition(2, 2, -1.5f);
    decals.add(decal);
}
