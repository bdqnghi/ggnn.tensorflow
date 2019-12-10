/**
 * Transitions from the alpha at the time this action starts to an alpha of 1.
 */
static public AlphaAction fadeIn(float duration, Interpolation interpolation) {
    AlphaAction action = action(AlphaAction.class);
    action.setAlpha(1);
    action.setDuration(duration);
    action.setInterpolation(interpolation);
    return action;
}
