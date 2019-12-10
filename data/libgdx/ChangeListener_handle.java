public boolean handle(Event event) {
    if (!(event instanceof ChangeEvent))
        return false;
    changed((ChangeEvent) event, event.getTarget());
    return false;
}
