public void touchDown(Tooltip tooltip) {
    showTask.cancel();
    if (tooltip.container.remove())
        resetTask.cancel();
    resetTask.run();
    if (enabled || tooltip.always) {
        showTooltip = tooltip;
        Timer.schedule(showTask, time);
    }
}
