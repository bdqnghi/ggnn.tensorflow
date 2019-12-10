/**
 * Removes an actor from this group. If the actor will not be used again and has actions, they should be
 * {@link Actor#clearActions() cleared} so the actions will be returned to their
 * {@link Action#setPool(com.badlogic.gdx.utils.Pool) pool}, if any. This is not done automatically.
 * @param unfocus If true, {@link Stage#unfocus(Actor)} is called.
 * @return true if the actor was removed from this group.
 */
public boolean removeActor(Actor actor, boolean unfocus) {
    if (!children.removeValue(actor, true))
        return false;
    if (unfocus) {
        Stage stage = getStage();
        if (stage != null)
            stage.unfocus(actor);
    }
    actor.setParent(null);
    actor.setStage(null);
    childrenChanged();
    return true;
}
