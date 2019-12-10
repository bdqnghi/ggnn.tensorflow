public boolean handle(Event event) {
    if (!active || !ClassReflection.isInstance(eventClass, event))
        return false;
    result = EventAction.this.handle((T) event);
    return result;
}
