/**
 * Transitions from the color at the time this action starts to the specified color.
 */
static public ColorAction color(Color color, float duration, Interpolation interpolation) {
    ColorAction action = action(ColorAction.class);
    action.setEndColor(color);
    action.setDuration(duration);
    action.setInterpolation(interpolation);
    return action;
}
