static public VisibleAction visible(boolean visible) {
    VisibleAction action = action(VisibleAction.class);
    action.setVisible(visible);
    return action;
}
