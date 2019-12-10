static public DelayAction delay(float duration, Action delayedAction) {
    DelayAction action = action(DelayAction.class);
    action.setDuration(duration);
    action.setAction(delayedAction);
    return action;
}
