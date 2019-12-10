static public SizeByAction sizeBy(float amountX, float amountY, float duration, Interpolation interpolation) {
    SizeByAction action = action(SizeByAction.class);
    action.setAmount(amountX, amountY);
    action.setDuration(duration);
    action.setInterpolation(interpolation);
    return action;
}
