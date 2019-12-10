/**
 * Transitions from the alpha at the time this action starts to an alpha of 0.
 */
static public AlphaAction fadeOut(float duration, Interpolation interpolation) {
    AlphaAction action = action(AlphaAction.class);
    action.setAlpha(0);
    action.setDuration(duration);
    action.setInterpolation(interpolation);
    return action;
}
