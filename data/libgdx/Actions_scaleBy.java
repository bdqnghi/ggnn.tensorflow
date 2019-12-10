static public ScaleByAction scaleBy(float amountX, float amountY, float duration, Interpolation interpolation) {
    ScaleByAction action = action(ScaleByAction.class);
    action.setAmount(amountX, amountY);
    action.setDuration(duration);
    action.setInterpolation(interpolation);
    return action;
}
