public void hide(Tooltip tooltip) {
    showTooltip = null;
    showTask.cancel();
    if (tooltip.container.hasParent()) {
        shown.removeValue(tooltip, true);
        hideAction(tooltip);
        resetTask.cancel();
        Timer.schedule(resetTask, resetTime);
    }
}
