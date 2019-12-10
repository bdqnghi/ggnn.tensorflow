static public MoveByAction moveBy(float amountX, float amountY, float duration, Interpolation interpolation) {
    MoveByAction action = action(MoveByAction.class);
    action.setAmount(amountX, amountY);
    action.setDuration(duration);
    action.setInterpolation(interpolation);
    return action;
}
