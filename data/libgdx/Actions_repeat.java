static public RepeatAction repeat(int count, Action repeatedAction) {
    RepeatAction action = action(RepeatAction.class);
    action.setCount(count);
    action.setAction(repeatedAction);
    return action;
}
