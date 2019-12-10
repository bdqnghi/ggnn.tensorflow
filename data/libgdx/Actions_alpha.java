/**
 * Transitions from the alpha at the time this action starts to the specified alpha.
 */
static public AlphaAction alpha(float a, float duration, Interpolation interpolation) {
    AlphaAction action = action(AlphaAction.class);
    action.setAlpha(a);
    action.setDuration(duration);
    action.setInterpolation(interpolation);
    return action;
}
