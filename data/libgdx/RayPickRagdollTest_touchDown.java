@Override
public boolean touchDown(int screenX, int screenY, int pointer, int button) {
    boolean result = false;
    if (button == Buttons.LEFT) {
        Ray ray = camera.getPickRay(screenX, screenY);
        tmpV1.set(ray.direction).scl(10f).add(ray.origin);
        ClosestRayResultCallback cb = new ClosestRayResultCallback(ray.origin, tmpV1);
        world.collisionWorld.rayTest(ray.origin, tmpV1, cb);
        if (cb.hasHit()) {
            btRigidBody body = (btRigidBody) (cb.getCollisionObject());
            if (body != null && !body.isStaticObject() && !body.isKinematicObject()) {
                pickedBody = body;
                body.setActivationState(Collision.DISABLE_DEACTIVATION);
                cb.getHitPointWorld(tmpV);
                tmpV.mul(body.getCenterOfMassTransform().inv());
                pickConstraint = new btPoint2PointConstraint(body, tmpV);
                btConstraintSetting setting = pickConstraint.getSetting();
                setting.setImpulseClamp(30f);
                setting.setTau(0.001f);
                pickConstraint.setSetting(setting);
                ((btDynamicsWorld) world.collisionWorld).addConstraint(pickConstraint);
                pickDistance = tmpV1.sub(camera.position).len();
                result = true;
            }
        }
        cb.dispose();
    }
    return result ? result : super.touchDown(screenX, screenY, pointer, button);
}
