public boolean handle(Event e) {
    if (!(e instanceof InputEvent))
        return false;
    InputEvent event = (InputEvent) e;
    switch(event.getType()) {
        case touchDown:
            actor = event.getListenerActor();
            touchDownTarget = event.getTarget();
            detector.touchDown(event.getStageX(), event.getStageY(), event.getPointer(), event.getButton());
            actor.stageToLocalCoordinates(tmpCoords.set(event.getStageX(), event.getStageY()));
            touchDown(event, tmpCoords.x, tmpCoords.y, event.getPointer(), event.getButton());
            return true;
        case touchUp:
            if (event.isTouchFocusCancel())
                return false;
            this.event = event;
            actor = event.getListenerActor();
            detector.touchUp(event.getStageX(), event.getStageY(), event.getPointer(), event.getButton());
            actor.stageToLocalCoordinates(tmpCoords.set(event.getStageX(), event.getStageY()));
            touchUp(event, tmpCoords.x, tmpCoords.y, event.getPointer(), event.getButton());
            return true;
        case touchDragged:
            this.event = event;
            actor = event.getListenerActor();
            detector.touchDragged(event.getStageX(), event.getStageY(), event.getPointer());
            return true;
    }
    return false;
}
