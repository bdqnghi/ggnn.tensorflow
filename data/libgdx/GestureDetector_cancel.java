/**
 * No further gesture events will be triggered for the current touch, if any.
 */
public void cancel() {
    longPressTask.cancel();
    longPressFired = true;
}
