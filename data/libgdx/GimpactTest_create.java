@Override
public void create() {
    super.create();
    final Model chassisModel = objLoader.loadModel(Gdx.files.internal("data/car.obj"));
    disposables.add(chassisModel);
    chassisModel.materials.get(0).clear();
    chassisModel.materials.get(0).set(ColorAttribute.createDiffuse(Color.RED), ColorAttribute.createSpecular(Color.WHITE));
    chassisVertexArray = new btTriangleIndexVertexArray(chassisModel.meshParts);
    btGImpactMeshShape chassisShape = new btGImpactMeshShape(chassisVertexArray);
    chassisShape.setLocalScaling(new Vector3(1f, 1f, 1f));
    chassisShape.setMargin(0f);
    chassisShape.updateBound();
    world.addConstructor("chassis", new BulletConstructor(chassisModel, 1f, chassisShape));
    (ground = world.add("ground", 0f, 0f, 0f)).setColor(0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 1f);
    for (float y = 10f; y < 50f; y += 5f) world.add("chassis", -2f + (float) Math.random() * 4f, y, -2f + (float) Math.random() * 4f).setColor(0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 1f);
    btGImpactCollisionAlgorithm.registerAlgorithm(world.dispatcher);
}
