@Override
public BulletWorld createWorld() {
    btDefaultCollisionConfiguration collisionConfiguration = new btDefaultCollisionConfiguration();
    MyCollisionDispatcher dispatcher = new MyCollisionDispatcher(collisionConfiguration);
    btDbvtBroadphase broadphase = new btDbvtBroadphase();
    btSequentialImpulseConstraintSolver solver = new btSequentialImpulseConstraintSolver();
    btDiscreteDynamicsWorld collisionWorld = new btDiscreteDynamicsWorld(dispatcher, broadphase, solver, collisionConfiguration);
    return new BulletWorld(collisionConfiguration, dispatcher, broadphase, solver, collisionWorld);
}
