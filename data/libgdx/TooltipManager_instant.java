/**
 * Shows all tooltips on hover without a delay for {@link #resetTime} seconds.
 */
public void instant() {
    time = 0;
    showTask.run();
    showTask.cancel();
}
