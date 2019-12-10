static public RotateByAction rotateBy(float rotationAmount, float duration, Interpolation interpolation) {
    RotateByAction action = action(RotateByAction.class);
    action.setAmount(rotationAmount);
    action.setDuration(duration);
    action.setInterpolation(interpolation);
    return action;
}
