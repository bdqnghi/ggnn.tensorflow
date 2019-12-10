@Override
public void onInternalTick(btDynamicsWorld dynamicsWorld, float timeStep) {
    btCollisionObjectArray objs = dynamicsWorld.getCollisionObjectArray();
    dynamicsWorld.clearForces();
    int idx = 0;
    for (int i = 0; i < objs.size(); i++) {
        btRigidBody body = (btRigidBody) (objs.at(i));
        if (body == null || body.isStaticOrKinematicObject())
            continue;
        body.applyGravity();
        body.applyCentralForce(tmpV1.set(0f, 8.0f + (float) (6.0 * Math.random()), 0f));
        idx++;
    }
}
