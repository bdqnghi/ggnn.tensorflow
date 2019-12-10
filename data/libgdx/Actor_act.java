/**
 * Updates the actor based on time. Typically this is called each frame by {@link Stage#act(float)}.
 * <p>
 * The default implementation calls {@link Action#act(float)} on each action and removes actions that are complete.
 * @param delta Time in seconds since the last frame.
 */
public void act(float delta) {
    Array<Action> actions = this.actions;
    if (actions.size > 0) {
        if (stage != null && stage.getActionsRequestRendering())
            Gdx.graphics.requestRendering();
        for (int i = 0; i < actions.size; i++) {
            Action action = actions.get(i);
            if (action.act(delta) && i < actions.size) {
                Action current = actions.get(i);
                int actionIndex = current == action ? i : actions.indexOf(action, true);
                if (actionIndex != -1) {
                    actions.removeIndex(actionIndex);
                    action.setActor(null);
                    i--;
                }
            }
        }
    }
}
