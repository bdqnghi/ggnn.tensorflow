@Override
public void create() {
    super.create();
    instructions = "Tap to shoot\nArrow keys to drive\nR to reset\nLong press to toggle debug mode\nSwipe for next test";
    final Model chassisModel = objLoader.loadModel(Gdx.files.internal("data/car.obj"));
    disposables.add(chassisModel);
    chassisModel.materials.get(0).clear();
    chassisModel.materials.get(0).set(ColorAttribute.createDiffuse(Color.RED), ColorAttribute.createSpecular(Color.WHITE));
    final Model wheelModel = objLoader.loadModel(Gdx.files.internal("data/wheel.obj"));
    disposables.add(wheelModel);
    wheelModel.materials.get(0).clear();
    wheelModel.materials.get(0).set(ColorAttribute.createDiffuse(Color.BLACK), ColorAttribute.createSpecular(Color.WHITE), FloatAttribute.createShininess(128));
    Texture checkboard = new Texture(Gdx.files.internal("data/g3d/checkboard.png"));
    final Model largeGroundModel = modelBuilder.createBox(1000f, 2f, 1000f, new Material(TextureAttribute.createDiffuse(checkboard), ColorAttribute.createSpecular(Color.WHITE), FloatAttribute.createShininess(16f)), Usage.Position | Usage.Normal | Usage.TextureCoordinates);
    largeGroundModel.manageDisposable(checkboard);
    disposables.add(largeGroundModel);
    world.addConstructor("largeground", new BulletConstructor(largeGroundModel, 0f));
    BoundingBox bounds = new BoundingBox();
    Vector3 chassisHalfExtents = chassisModel.calculateBoundingBox(bounds).getDimensions(new Vector3()).scl(0.5f);
    Vector3 wheelHalfExtents = wheelModel.calculateBoundingBox(bounds).getDimensions(new Vector3()).scl(0.5f);
    world.addConstructor("chassis", new BulletConstructor(chassisModel, 5f, new btBoxShape(chassisHalfExtents)));
    world.addConstructor("wheel", new BulletConstructor(wheelModel, 0, null));
    world.add("largeground", 0, -1f, 0f);
    chassis = world.add("chassis", 0, 3f, 0);
    wheels[0] = world.add("wheel", 0, 0, 0);
    wheels[1] = world.add("wheel", 0, 0, 0);
    wheels[2] = world.add("wheel", 0, 0, 0);
    wheels[3] = world.add("wheel", 0, 0, 0);
    // Create the vehicle
    raycaster = new btDefaultVehicleRaycaster((btDynamicsWorld) world.collisionWorld);
    tuning = new btVehicleTuning();
    vehicle = new btRaycastVehicle(tuning, (btRigidBody) chassis.body, raycaster);
    chassis.body.setActivationState(Collision.DISABLE_DEACTIVATION);
    ((btDynamicsWorld) world.collisionWorld).addVehicle(vehicle);
    vehicle.setCoordinateSystem(0, 1, 2);
    btWheelInfo wheelInfo;
    Vector3 point = new Vector3();
    Vector3 direction = new Vector3(0, -1, 0);
    Vector3 axis = new Vector3(-1, 0, 0);
    wheelInfo = vehicle.addWheel(point.set(chassisHalfExtents).scl(0.9f, -0.8f, 0.7f), direction, axis, wheelHalfExtents.z * 0.3f, wheelHalfExtents.z, tuning, true);
    wheelInfo = vehicle.addWheel(point.set(chassisHalfExtents).scl(-0.9f, -0.8f, 0.7f), direction, axis, wheelHalfExtents.z * 0.3f, wheelHalfExtents.z, tuning, true);
    wheelInfo = vehicle.addWheel(point.set(chassisHalfExtents).scl(0.9f, -0.8f, -0.5f), direction, axis, wheelHalfExtents.z * 0.3f, wheelHalfExtents.z, tuning, false);
    wheelInfo = vehicle.addWheel(point.set(chassisHalfExtents).scl(-0.9f, -0.8f, -0.5f), direction, axis, wheelHalfExtents.z * 0.3f, wheelHalfExtents.z, tuning, false);
}
