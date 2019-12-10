static public RemoveAction removeAction(Action action, Actor targetActor) {
    RemoveAction removeAction = action(RemoveAction.class);
    removeAction.setTarget(targetActor);
    removeAction.setAction(action);
    return removeAction;
}
