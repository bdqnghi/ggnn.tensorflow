public void hideAll() {
    resetTask.cancel();
    showTask.cancel();
    time = initialTime;
    showTooltip = null;
    for (Tooltip tooltip : shown) tooltip.hide();
    shown.clear();
}
