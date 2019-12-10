static public AfterAction after(Action action) {
    AfterAction afterAction = action(AfterAction.class);
    afterAction.setAction(action);
    return afterAction;
}
