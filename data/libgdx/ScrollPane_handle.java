public boolean handle(Event event) {
    if (super.handle(event)) {
        if (((InputEvent) event).getType() == InputEvent.Type.touchDown)
            flingTimer = 0;
        return true;
    }
    return false;
}
