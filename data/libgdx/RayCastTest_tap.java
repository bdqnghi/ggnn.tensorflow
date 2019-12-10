@Override
public boolean tap(float x, float y, int count, int button) {
    Ray ray = camera.getPickRay(x, y);
    rayFrom.set(ray.origin);
    // 50 meters max from the origin
    rayTo.set(ray.direction).scl(50f).add(rayFrom);
    // Because we reuse the ClosestRayResultCallback, we need reset it's values
    rayTestCB.setCollisionObject(null);
    rayTestCB.setClosestHitFraction(1f);
    rayTestCB.setRayFromWorld(rayFrom);
    rayTestCB.setRayToWorld(rayTo);
    world.collisionWorld.rayTest(rayFrom, rayTo, rayTestCB);
    if (rayTestCB.hasHit()) {
        final btCollisionObject obj = rayTestCB.getCollisionObject();
        if (!obj.isStaticOrKinematicObject()) {
            final btRigidBody body = (btRigidBody) (obj);
            body.activate();
            body.applyCentralImpulse(tmpV2.set(ray.direction).scl(20f));
        }
    }
    return true;
}
