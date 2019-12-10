static public MoveToAction moveToAligned(float x, float y, int alignment, float duration, Interpolation interpolation) {
    MoveToAction action = action(MoveToAction.class);
    action.setPosition(x, y, alignment);
    action.setDuration(duration);
    action.setInterpolation(interpolation);
    return action;
}
