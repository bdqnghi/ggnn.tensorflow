/**
 * If a touch down is being monitored, the drag and touch up events are ignored until the next touch up.
 */
public void cancel() {
    if (pressedPointer == -1)
        return;
    cancelled = true;
    pressed = false;
}
