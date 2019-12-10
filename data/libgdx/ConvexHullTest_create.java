@Override
public void create() {
    super.create();
    final Model carModel = objLoader.loadModel(Gdx.files.internal("data/car.obj"));
    disposables.add(carModel);
    carModel.materials.get(0).clear();
    carModel.materials.get(0).set(ColorAttribute.createDiffuse(Color.WHITE), ColorAttribute.createSpecular(Color.WHITE));
    world.addConstructor("car", new BulletConstructor(carModel, 5f, createConvexHullShape(carModel, true)));
    // Create the entities
    world.add("ground", 0f, 0f, 0f).setColor(0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 1f);
    for (float y = 10f; y < 50f; y += 5f) world.add("car", -2f + (float) Math.random() * 4f, y, -2f + (float) Math.random() * 4f).setColor(0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 1f);
}
