static public RemoveListenerAction removeListener(EventListener listener, boolean capture, Actor targetActor) {
    RemoveListenerAction addAction = action(RemoveListenerAction.class);
    addAction.setTarget(targetActor);
    addAction.setListener(listener);
    addAction.setCapture(capture);
    return addAction;
}
