@Override
public void create() {
    super.create();
    instructions = "Tap a triangle to ray cast\nLong press to toggle debug mode\nSwipe for next test\nCtrl+drag to rotate\nScroll to zoom";
    shapeRenderer = new ShapeRenderer();
    model = objLoader.loadModel(Gdx.files.internal("data/scene.obj"));
    model.materials.get(0).clear();
    model.materials.get(0).set(ColorAttribute.createDiffuse(Color.WHITE), ColorAttribute.createSpecular(Color.WHITE));
    // Only indexed BvhTriangleMeshShape can be used for triangle picking.
    btTriangleIndexVertexArray vertexArray = new btTriangleIndexVertexArray(model.meshParts);
    triangleShape = new btBvhTriangleMeshShape(vertexArray, true);
    triangleRaycastCallback = new MyTriangleRaycastCallback(Vector3.Zero, Vector3.Zero);
    // Ignore intersection with mesh backfaces.
    triangleRaycastCallback.setFlags(EFlags.kF_FilterBackfaces);
    world.addConstructor("scene", new BulletConstructor(model, 0, triangleShape));
    world.add("scene", 0, 0, 0);
    disposables.add(model);
    disposables.add(triangleRaycastCallback);
    disposables.add(triangleShape);
    disposables.add(vertexArray);
    disposables.add(shapeRenderer);
}
