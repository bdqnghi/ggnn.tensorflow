/**
 * Sets this actor as the event {@link Event#setTarget(Actor) target} and propagates the event to this actor and ancestor
 * actors as necessary. If this actor is not in the stage, the stage must be set before calling this method.
 * <p>
 * Events are fired in 2 phases.
 * <ol>
 * <li>The first phase (the "capture" phase) notifies listeners on each actor starting at the root and propagating downward to
 * (and including) this actor.</li>
 * <li>The second phase notifies listeners on each actor starting at this actor and, if {@link Event#getBubbles()} is true,
 * propagating upward to the root.</li>
 * </ol>
 * If the event is {@link Event#stop() stopped} at any time, it will not propagate to the next actor.
 * @return true if the event was {@link Event#cancel() cancelled}.
 */
public boolean fire(Event event) {
    if (event.getStage() == null)
        event.setStage(getStage());
    event.setTarget(this);
    // Collect ancestors so event propagation is unaffected by hierarchy changes.
    Array<Group> ancestors = Pools.obtain(Array.class);
    Group parent = this.parent;
    while (parent != null) {
        ancestors.add(parent);
        parent = parent.parent;
    }
    try {
        // Notify all parent capture listeners, starting at the root. Ancestors may stop an event before children receive it.
        Object[] ancestorsArray = ancestors.items;
        for (int i = ancestors.size - 1; i >= 0; i--) {
            Group currentTarget = (Group) ancestorsArray[i];
            currentTarget.notify(event, true);
            if (event.isStopped())
                return event.isCancelled();
        }
        // Notify the target capture listeners.
        notify(event, true);
        if (event.isStopped())
            return event.isCancelled();
        // Notify the target listeners.
        notify(event, false);
        if (!event.getBubbles())
            return event.isCancelled();
        if (event.isStopped())
            return event.isCancelled();
        // Notify all parent listeners, starting at the target. Children may stop an event before ancestors receive it.
        for (int i = 0, n = ancestors.size; i < n; i++) {
            ((Group) ancestorsArray[i]).notify(event, false);
            if (event.isStopped())
                return event.isCancelled();
        }
        return event.isCancelled();
    } finally {
        ancestors.clear();
        Pools.free(ancestors);
    }
}
