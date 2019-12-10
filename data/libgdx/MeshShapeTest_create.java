@Override
public void create() {
    super.create();
    final Model sphereModel = modelBuilder.createSphere(0.5f, 0.5f, 0.5f, 8, 8, new Material(ColorAttribute.createDiffuse(Color.WHITE), ColorAttribute.createSpecular(Color.WHITE)), Usage.Position | Usage.Normal);
    disposables.add(sphereModel);
    final BulletConstructor sphereConstructor = new BulletConstructor(sphereModel, 0.25f, new btSphereShape(0.25f));
    sphereConstructor.bodyInfo.setRestitution(1f);
    world.addConstructor("sphere", sphereConstructor);
    final Model sceneModel = objLoader.loadModel(Gdx.files.internal("data/scene.obj"));
    disposables.add(sceneModel);
    final BulletConstructor sceneConstructor = new BulletConstructor(sceneModel, 0f, new btBvhTriangleMeshShape(sceneModel.meshParts));
    sceneConstructor.bodyInfo.setRestitution(0.25f);
    world.addConstructor("scene", sceneConstructor);
    world.add("scene", (new Matrix4()).setToTranslation(0f, 2f, 0f).rotate(Vector3.Y, -90)).setColor(0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 1f);
    world.add("ground", 0f, 0f, 0f).setColor(0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 1f);
    for (float x = -3; x < 7; x++) {
        for (float z = -5; z < 5; z++) {
            world.add("sphere", x, 10f + (float) Math.random() * 0.1f, z).setColor(0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 1f);
        }
    }
}
