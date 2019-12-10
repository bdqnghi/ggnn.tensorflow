@Override
public boolean keyUp(int keycode) {
    switch(keycode) {
        case Keys.DOWN:
            downPressed = false;
            break;
        case Keys.UP:
            upPressed = false;
            break;
        case Keys.LEFT:
            leftPressed = false;
            break;
        case Keys.RIGHT:
            rightPressed = false;
            break;
        case Keys.R:
            chassis.body.setWorldTransform(chassis.transform.setToTranslation(0, 5, 0));
            chassis.body.setInterpolationWorldTransform(chassis.transform);
            ((btRigidBody) (chassis.body)).setLinearVelocity(Vector3.Zero);
            ((btRigidBody) (chassis.body)).setAngularVelocity(Vector3.Zero);
            chassis.body.activate();
            break;
    }
    return super.keyUp(keycode);
}
