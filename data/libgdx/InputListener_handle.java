public boolean handle(Event e) {
    if (!(e instanceof InputEvent))
        return false;
    InputEvent event = (InputEvent) e;
    switch(event.getType()) {
        case keyDown:
            return keyDown(event, event.getKeyCode());
        case keyUp:
            return keyUp(event, event.getKeyCode());
        case keyTyped:
            return keyTyped(event, event.getCharacter());
    }
    event.toCoordinates(event.getListenerActor(), tmpCoords);
    switch(event.getType()) {
        case touchDown:
            return touchDown(event, tmpCoords.x, tmpCoords.y, event.getPointer(), event.getButton());
        case touchUp:
            touchUp(event, tmpCoords.x, tmpCoords.y, event.getPointer(), event.getButton());
            return true;
        case touchDragged:
            touchDragged(event, tmpCoords.x, tmpCoords.y, event.getPointer());
            return true;
        case mouseMoved:
            return mouseMoved(event, tmpCoords.x, tmpCoords.y);
        case scrolled:
            return scrolled(event, tmpCoords.x, tmpCoords.y, event.getScrollAmount());
        case enter:
            enter(event, tmpCoords.x, tmpCoords.y, event.getPointer(), event.getRelatedActor());
            return false;
        case exit:
            exit(event, tmpCoords.x, tmpCoords.y, event.getPointer(), event.getRelatedActor());
            return false;
    }
    return false;
}
