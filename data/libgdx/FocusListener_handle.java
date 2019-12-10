public boolean handle(Event event) {
    if (!(event instanceof FocusEvent))
        return false;
    FocusEvent focusEvent = (FocusEvent) event;
    switch(focusEvent.getType()) {
        case keyboard:
            keyboardFocusChanged(focusEvent, event.getTarget(), focusEvent.isFocused());
            break;
        case scroll:
            scrollFocusChanged(focusEvent, event.getTarget(), focusEvent.isFocused());
            break;
    }
    return false;
}
