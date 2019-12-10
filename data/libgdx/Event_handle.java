/**
 * Marks this event as handled. This does not affect event propagation inside scene2d, but causes the {@link Stage} event
 * methods to return true, which will eat the event so it is not passed on to the application under the stage.
 */
public void handle() {
    handled = true;
}
