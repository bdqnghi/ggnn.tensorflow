static public RotateToAction rotateTo(float rotation, float duration, Interpolation interpolation) {
    RotateToAction action = action(RotateToAction.class);
    action.setRotation(rotation);
    action.setDuration(duration);
    action.setInterpolation(interpolation);
    return action;
}
