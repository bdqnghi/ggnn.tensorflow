@Override
public void create() {
    super.create();
    final Model sphereModel = modelBuilder.createSphere(1f, 1f, 1f, 8, 8, new Material(ColorAttribute.createDiffuse(Color.WHITE), ColorAttribute.createSpecular(Color.WHITE)), Usage.Position | Usage.Normal);
    disposables.add(sphereModel);
    final BulletConstructor sphereConstructor = new BulletConstructor(sphereModel, 0.5f, new btSphereShape(0.5f));
    sphereConstructor.bodyInfo.setRestitution(1f);
    world.addConstructor("sphere", sphereConstructor);
    final Model sceneModel = objLoader.loadModel(Gdx.files.internal("data/scene.obj"));
    disposables.add(sceneModel);
    final BulletConstructor sceneConstructor = new BulletConstructor(sceneModel, 0f, new btBvhTriangleMeshShape(sceneModel.meshParts));
    sceneConstructor.bodyInfo.setRestitution(0.25f);
    world.addConstructor("scene", sceneConstructor);
    final BulletEntity scene = world.add("scene", (new Matrix4()).setToTranslation(0f, 2f, 0f).rotate(Vector3.Y, -90));
    scene.setColor(0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 1f);
    scene.body.setContactCallbackFlag(2);
    world.add("ground", 0f, 0f, 0f).setColor(0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 1f);
    for (int x = 0; x < SPHERECOUNT_X; x++) {
        for (int y = 0; y < SPHERECOUNT_Y; y++) {
            for (int z = 0; z < SPHERECOUNT_Z; z++) {
                final BulletEntity e = (BulletEntity) world.add("sphere", SPHEREOFFSET_X + x * 3f, SPHEREOFFSET_Y + y * 3f, SPHEREOFFSET_Z + z * 3f);
                e.setColor(0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 1f);
                e.body.setContactCallbackFilter(2);
            }
        }
    }
    if (USE_CONTACT_CACHE) {
        contactCache = new TestContactCache();
        contactCache.entities = world.entities;
        contactCache.setCacheTime(0.5f);
    } else {
        contactListener = new TestContactListener();
        contactListener.entities = world.entities;
    }
    time = 0;
}
