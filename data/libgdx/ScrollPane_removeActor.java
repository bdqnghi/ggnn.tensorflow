public boolean removeActor(Actor actor) {
    if (actor != widget)
        return false;
    setWidget(null);
    return true;
}
