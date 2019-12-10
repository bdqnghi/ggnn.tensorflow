public boolean removeActor(Actor actor) {
    if (actor != this.actor)
        return false;
    setActor(null);
    return true;
}
