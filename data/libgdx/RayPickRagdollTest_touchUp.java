@Override
public boolean touchUp(int screenX, int screenY, int pointer, int button) {
    boolean result = false;
    if (button == Buttons.LEFT) {
        if (pickConstraint != null) {
            ((btDynamicsWorld) world.collisionWorld).removeConstraint(pickConstraint);
            pickConstraint.dispose();
            pickConstraint = null;
            result = true;
        }
        if (pickedBody != null) {
            pickedBody.forceActivationState(Collision.ACTIVE_TAG);
            pickedBody.setDeactivationTime(0f);
            pickedBody = null;
        }
    }
    return result ? result : super.touchUp(screenX, screenY, pointer, button);
}
