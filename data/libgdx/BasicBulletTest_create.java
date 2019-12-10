@Override
public void create() {
    super.create();
    instructions = "Swipe for next test";
    lights = new Environment();
    lights.set(new ColorAttribute(ColorAttribute.AmbientLight, 0.2f, 0.2f, 0.2f, 1.f));
    lights.add(new DirectionalLight().set(0.8f, 0.8f, 0.8f, -0.5f, -1f, -0.7f));
    // Set up the camera
    final float width = Gdx.graphics.getWidth();
    final float height = Gdx.graphics.getHeight();
    if (width > height)
        camera = new PerspectiveCamera(67f, 3f * width / height, 3f);
    else
        camera = new PerspectiveCamera(67f, 3f, 3f * height / width);
    camera.position.set(10f, 10f, 10f);
    camera.lookAt(0, 0, 0);
    camera.update();
    // Create the model batch
    modelBatch = new ModelBatch();
    // Create some basic models
    final Model groundModel = modelBuilder.createRect(20f, 0f, -20f, -20f, 0f, -20f, -20f, 0f, 20f, 20f, 0f, 20f, 0, 1, 0, new Material(ColorAttribute.createDiffuse(Color.BLUE), ColorAttribute.createSpecular(Color.WHITE), FloatAttribute.createShininess(16f)), Usage.Position | Usage.Normal);
    models.add(groundModel);
    final Model sphereModel = modelBuilder.createSphere(1f, 1f, 1f, 10, 10, new Material(ColorAttribute.createDiffuse(Color.RED), ColorAttribute.createSpecular(Color.WHITE), FloatAttribute.createShininess(64f)), Usage.Position | Usage.Normal);
    models.add(sphereModel);
    // Load the bullet library
    // Normally use: Bullet.init();
    BaseBulletTest.init();
    // Create the bullet world
    collisionConfiguration = new btDefaultCollisionConfiguration();
    dispatcher = new btCollisionDispatcher(collisionConfiguration);
    broadphase = new btDbvtBroadphase();
    solver = new btSequentialImpulseConstraintSolver();
    collisionWorld = new btDiscreteDynamicsWorld(dispatcher, broadphase, solver, collisionConfiguration);
    collisionWorld.setGravity(gravity);
    // Create the shapes and body construction infos
    btCollisionShape groundShape = new btBoxShape(tempVector.set(20, 0, 20));
    shapes.add(groundShape);
    btRigidBodyConstructionInfo groundInfo = new btRigidBodyConstructionInfo(0f, null, groundShape, Vector3.Zero);
    bodyInfos.add(groundInfo);
    btCollisionShape sphereShape = new btSphereShape(0.5f);
    shapes.add(sphereShape);
    sphereShape.calculateLocalInertia(1f, tempVector);
    btRigidBodyConstructionInfo sphereInfo = new btRigidBodyConstructionInfo(1f, null, sphereShape, tempVector);
    bodyInfos.add(sphereInfo);
    // Create the ground
    ModelInstance ground = new ModelInstance(groundModel);
    instances.add(ground);
    btDefaultMotionState groundMotionState = new btDefaultMotionState();
    groundMotionState.setWorldTransform(ground.transform);
    motionStates.add(groundMotionState);
    btRigidBody groundBody = new btRigidBody(groundInfo);
    groundBody.setMotionState(groundMotionState);
    bodies.add(groundBody);
    collisionWorld.addRigidBody(groundBody);
    // Create the spheres
    for (float x = -10f; x <= 10f; x += 2f) {
        for (float y = 5f; y <= 15f; y += 2f) {
            for (float z = 0f; z <= 0f; z += 2f) {
                ModelInstance sphere = new ModelInstance(sphereModel);
                instances.add(sphere);
                sphere.transform.trn(x + 0.1f * MathUtils.random(), y + 0.1f * MathUtils.random(), z + 0.1f * MathUtils.random());
                btDefaultMotionState sphereMotionState = new btDefaultMotionState();
                sphereMotionState.setWorldTransform(sphere.transform);
                motionStates.add(sphereMotionState);
                btRigidBody sphereBody = new btRigidBody(sphereInfo);
                sphereBody.setMotionState(sphereMotionState);
                bodies.add(sphereBody);
                collisionWorld.addRigidBody(sphereBody);
            }
        }
    }
}
