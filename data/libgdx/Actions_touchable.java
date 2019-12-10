static public TouchableAction touchable(Touchable touchable) {
    TouchableAction action = action(TouchableAction.class);
    action.setTouchable(touchable);
    return action;
}
