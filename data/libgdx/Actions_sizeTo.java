static public SizeToAction sizeTo(float x, float y, float duration, Interpolation interpolation) {
    SizeToAction action = action(SizeToAction.class);
    action.setSize(x, y);
    action.setDuration(duration);
    action.setInterpolation(interpolation);
    return action;
}
