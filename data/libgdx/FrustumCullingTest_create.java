@Override
public void create() {
    super.create();
    instructions = "Tap to toggle view\nLong press to toggle debug mode\nSwipe for next test\nCtrl+drag to rotate\nScroll to zoom";
    tempManifoldArr = new btPersistentManifoldArray();
    world.addConstructor("collisionBox", new BulletConstructor(world.getConstructor("box").model));
    // Create the entities
    final float dX = BOX_X_MAX - BOX_X_MIN;
    final float dY = BOX_Y_MAX - BOX_Y_MIN;
    final float dZ = BOX_Z_MAX - BOX_Z_MIN;
    for (int i = 0; i < BOXCOUNT; i++) world.add("collisionBox", BOX_X_MIN + dX * (float) Math.random(), BOX_Y_MIN + dY * (float) Math.random(), BOX_Z_MIN + dZ * (float) Math.random()).setColor(Color.GRAY);
    frustumCam = new PerspectiveCamera(camera.fieldOfView, camera.viewportWidth, camera.viewportHeight);
    frustumCam.far = Vector3.len(BOX_X_MAX, BOX_Y_MAX, BOX_Z_MAX);
    frustumCam.update();
    overviewCam = camera;
    overviewCam.position.set(BOX_X_MAX, BOX_Y_MAX, BOX_Z_MAX);
    overviewCam.lookAt(Vector3.Zero);
    overviewCam.far = 150f;
    overviewCam.update();
    final Model frustumModel = createFrustumModel(frustumCam.frustum.planePoints);
    disposables.add(frustumModel);
    frustumObject = createFrustumObject(frustumCam.frustum.planePoints);
    world.add(frustumEntity = new BulletEntity(frustumModel, frustumObject, 0, 0, 0));
    frustumEntity.setColor(Color.BLUE);
}
