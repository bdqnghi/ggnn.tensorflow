/**
 * Toggles the checked state. This method changes the checked state, which fires a {@link ChangeEvent} (if programmatic change
 * events are enabled), so can be used to simulate a button click.
 */
public void toggle() {
    setChecked(!isChecked);
}
