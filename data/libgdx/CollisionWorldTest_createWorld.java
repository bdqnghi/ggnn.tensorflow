@Override
public BulletWorld createWorld() {
    btDefaultCollisionConfiguration collisionConfig = new btDefaultCollisionConfiguration();
    btCollisionDispatcher dispatcher = new btCollisionDispatcher(collisionConfig);
    btDbvtBroadphase broadphase = new btDbvtBroadphase();
    btCollisionWorld collisionWorld = new btCollisionWorld(dispatcher, broadphase, collisionConfig);
    return new BulletWorld(collisionConfig, dispatcher, broadphase, null, collisionWorld);
}
