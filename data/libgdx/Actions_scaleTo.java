static public ScaleToAction scaleTo(float x, float y, float duration, Interpolation interpolation) {
    ScaleToAction action = action(ScaleToAction.class);
    action.setScale(x, y);
    action.setDuration(duration);
    action.setInterpolation(interpolation);
    return action;
}
