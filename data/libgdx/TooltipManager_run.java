public void run() {
    if (showTooltip == null)
        return;
    Stage stage = showTooltip.targetActor.getStage();
    if (stage == null)
        return;
    stage.addActor(showTooltip.container);
    showTooltip.container.toFront();
    shown.add(showTooltip);
    showTooltip.container.clearActions();
    showAction(showTooltip);
    if (!showTooltip.instant) {
        time = subsequentTime;
        resetTask.cancel();
    }
}
