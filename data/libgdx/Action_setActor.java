/**
 * Sets the actor this action is attached to. This also sets the {@link #setTarget(Actor) target} actor if it is null. This
 * method is called automatically when an action is added to an actor. This method is also called with null when an action is
 * removed from an actor.
 * <p>
 * When set to null, if the action has a {@link #setPool(Pool) pool} then the action is {@link Pool#free(Object) returned} to
 * the pool (which calls {@link #reset()}) and the pool is set to null. If the action does not have a pool, {@link #reset()} is
 * not called.
 * <p>
 * This method is not typically a good place for an action subclass to query the actor's state because the action may not be
 * executed for some time, eg it may be {@link DelayAction delayed}. The actor's state is best queried in the first call to
 * {@link #act(float)}. For a {@link TemporalAction}, use TemporalAction#begin().
 */
public void setActor(Actor actor) {
    this.actor = actor;
    if (target == null)
        setTarget(actor);
    if (actor == null) {
        if (pool != null) {
            pool.free(this);
            pool = null;
        }
    }
}
