@Override
public void update() {
    final float delta = Gdx.graphics.getDeltaTime();
    float angle = currentAngle;
    if (rightPressed) {
        if (angle > 0f)
            angle = 0f;
        angle = MathUtils.clamp(angle - steerSpeed * delta, -maxAngle, 0f);
    } else if (leftPressed) {
        if (angle < 0f)
            angle = 0f;
        angle = MathUtils.clamp(angle + steerSpeed * delta, 0f, maxAngle);
    } else
        angle = 0f;
    if (angle != currentAngle) {
        currentAngle = angle;
        vehicle.setSteeringValue(angle * MathUtils.degreesToRadians, 0);
        vehicle.setSteeringValue(angle * MathUtils.degreesToRadians, 1);
    }
    float force = currentForce;
    if (upPressed) {
        if (force < 0f)
            force = 0f;
        force = MathUtils.clamp(force + acceleration * delta, 0f, maxForce);
    } else if (downPressed) {
        if (force > 0f)
            force = 0f;
        force = MathUtils.clamp(force - acceleration * delta, -maxForce, 0f);
    } else
        force = 0f;
    if (force != currentForce) {
        currentForce = force;
        vehicle.applyEngineForce(force, 0);
        vehicle.applyEngineForce(force, 1);
    }
    super.update();
    for (int i = 0; i < wheels.length; i++) {
        vehicle.updateWheelTransform(i, true);
        vehicle.getWheelInfo(i).getWorldTransform().getOpenGLMatrix(wheels[i].transform.val);
    }
    chassis.transform.getTranslation(camera.position);
    tmpV.set(camera.position).sub(5, 0, 5).y = 0f;
    camera.position.add(tmpV.nor().scl(-6f)).y = 4.f;
    chassis.transform.getTranslation(tmpV);
    camera.lookAt(tmpV);
    camera.up.set(Vector3.Y);
    camera.update();
}
