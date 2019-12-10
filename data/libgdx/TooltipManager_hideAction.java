/**
 * Called when tooltip is hidden. Default implementation sets actions to animate hiding and to remove the actor from the stage
 * when the actions are complete. A subclass must at least remove the actor.
 */
protected void hideAction(Tooltip tooltip) {
    tooltip.container.addAction(sequence(parallel(alpha(0.2f, 0.2f, fade), scaleTo(0.05f, 0.05f, 0.2f, Interpolation.fade)), removeActor()));
}
