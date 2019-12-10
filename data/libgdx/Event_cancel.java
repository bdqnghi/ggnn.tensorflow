/**
 * Marks this event cancelled. This {@link #handle() handles} the event and {@link #stop() stops} the event propagation. It
 * also cancels any default action that would have been taken by the code that fired the event. Eg, if the event is for a
 * checkbox being checked, cancelling the event could uncheck the checkbox.
 */
public void cancel() {
    cancelled = true;
    stopped = true;
    handled = true;
}
