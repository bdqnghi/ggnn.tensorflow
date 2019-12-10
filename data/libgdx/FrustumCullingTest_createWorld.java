@Override
public BulletWorld createWorld() {
    // No need to use dynamics for this test
    btDbvtBroadphase broadphase = new btDbvtBroadphase();
    btDefaultCollisionConfiguration collisionConfig = new btDefaultCollisionConfiguration();
    btCollisionDispatcher dispatcher = new btCollisionDispatcher(collisionConfig);
    btCollisionWorld collisionWorld = new btCollisionWorld(dispatcher, broadphase, collisionConfig);
    return new BulletWorld(collisionConfig, dispatcher, broadphase, null, collisionWorld);
}
