/**
 * @param actor May be null.
 */
public void setActor(T actor) {
    if (actor == this)
        throw new IllegalArgumentException("actor cannot be the Container.");
    if (actor == this.actor)
        return;
    if (this.actor != null)
        super.removeActor(this.actor);
    this.actor = actor;
    if (actor != null)
        super.addActor(actor);
}
