static public LayoutAction layout(boolean enabled) {
    LayoutAction action = action(LayoutAction.class);
    action.setLayoutEnabled(enabled);
    return action;
}
