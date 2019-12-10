/**
 * Sets the actor in this cell and adds the actor to the cell's table. If null, removes any current actor.
 */
public <A extends Actor> Cell<A> setActor(A newActor) {
    if (actor != newActor) {
        if (actor != null)
            actor.remove();
        actor = newActor;
        if (newActor != null)
            table.addActor(newActor);
    }
    return (Cell<A>) this;
}
