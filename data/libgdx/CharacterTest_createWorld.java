@Override
public BulletWorld createWorld() {
    // We create the world using an axis sweep broadphase for this test
    btDefaultCollisionConfiguration collisionConfiguration = new btDefaultCollisionConfiguration();
    btCollisionDispatcher dispatcher = new btCollisionDispatcher(collisionConfiguration);
    btAxisSweep3 sweep = new btAxisSweep3(new Vector3(-1000, -1000, -1000), new Vector3(1000, 1000, 1000));
    btSequentialImpulseConstraintSolver solver = new btSequentialImpulseConstraintSolver();
    btDiscreteDynamicsWorld collisionWorld = new btDiscreteDynamicsWorld(dispatcher, sweep, solver, collisionConfiguration);
    ghostPairCallback = new btGhostPairCallback();
    sweep.getOverlappingPairCache().setInternalGhostPairCallback(ghostPairCallback);
    return new BulletWorld(collisionConfiguration, dispatcher, sweep, solver, collisionWorld);
}
