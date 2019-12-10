static public MoveToAction moveTo(float x, float y, float duration, Interpolation interpolation) {
    MoveToAction action = action(MoveToAction.class);
    action.setPosition(x, y);
    action.setDuration(duration);
    action.setInterpolation(interpolation);
    return action;
}
