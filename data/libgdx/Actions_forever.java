static public RepeatAction forever(Action repeatedAction) {
    RepeatAction action = action(RepeatAction.class);
    action.setCount(RepeatAction.FOREVER);
    action.setAction(repeatedAction);
    return action;
}
