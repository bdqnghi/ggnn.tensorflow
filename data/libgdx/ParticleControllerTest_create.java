@Override
public void create() {
    super.create();
    emitters = new Array<ParticleController>();
    assets.load(DEFAULT_PARTICLE, Texture.class);
    assets.load(DEFAULT_SKIN, Skin.class);
    loading = true;
    environment = new Environment();
    environment.set(new ColorAttribute(ColorAttribute.AmbientLight, 0f, 0f, 0.1f, 1f));
    environment.add(new DirectionalLight().set(1f, 1f, 1f, 0, -0.5f, -1));
    billboardParticleBatch = new BillboardParticleBatch();
    billboardParticleBatch.setCamera(cam);
    ui = new Stage();
    builder = new StringBuilder();
}
