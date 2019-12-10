static public AddListenerAction addListener(EventListener listener, boolean capture, Actor targetActor) {
    AddListenerAction addAction = action(AddListenerAction.class);
    addAction.setTarget(targetActor);
    addAction.setListener(listener);
    addAction.setCapture(capture);
    return addAction;
}
