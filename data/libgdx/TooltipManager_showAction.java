/**
 * Called when tooltip is shown. Default implementation sets actions to animate showing.
 */
protected void showAction(Tooltip tooltip) {
    float actionTime = animations ? (time > 0 ? 0.5f : 0.15f) : 0.1f;
    tooltip.container.setTransform(true);
    tooltip.container.getColor().a = 0.2f;
    tooltip.container.setScale(0.05f);
    tooltip.container.addAction(parallel(fadeIn(actionTime, fade), scaleTo(1, 1, actionTime, Interpolation.fade)));
}
