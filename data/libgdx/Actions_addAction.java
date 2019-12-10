static public AddAction addAction(Action action, Actor targetActor) {
    AddAction addAction = action(AddAction.class);
    addAction.setTarget(targetActor);
    addAction.setAction(action);
    return addAction;
}
