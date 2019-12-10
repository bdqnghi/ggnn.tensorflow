/**
 * Removes all actions on this actor.
 */
public void clearActions() {
    for (int i = actions.size - 1; i >= 0; i--) actions.get(i).setActor(null);
    actions.clear();
}
