@Override
public BulletWorld createWorld() {
    btDefaultCollisionConfiguration collisionConfiguration = new btSoftBodyRigidBodyCollisionConfiguration();
    btCollisionDispatcher dispatcher = new btCollisionDispatcher(collisionConfiguration);
    btAxisSweep3 broadphase = new btAxisSweep3(tmpV1.set(-1000, -1000, -1000), tmpV2.set(1000, 1000, 1000), 1024);
    btSequentialImpulseConstraintSolver solver = new btSequentialImpulseConstraintSolver();
    btSoftRigidDynamicsWorld dynamicsWorld = new btSoftRigidDynamicsWorld(dispatcher, broadphase, solver, collisionConfiguration);
    worldInfo = new btSoftBodyWorldInfo();
    worldInfo.setBroadphase(broadphase);
    worldInfo.setDispatcher(dispatcher);
    worldInfo.getSparsesdf().Initialize();
    return new BulletWorld(collisionConfiguration, dispatcher, broadphase, solver, dynamicsWorld);
}
