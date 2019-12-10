static public TimeScaleAction timeScale(float scale, Action scaledAction) {
    TimeScaleAction action = action(TimeScaleAction.class);
    action.setScale(scale);
    action.setAction(scaledAction);
    return action;
}
