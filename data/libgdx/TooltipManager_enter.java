public void enter(Tooltip tooltip) {
    showTooltip = tooltip;
    showTask.cancel();
    if (enabled || tooltip.always) {
        if (time == 0 || tooltip.instant)
            showTask.run();
        else
            Timer.schedule(showTask, time);
    }
}
