/**
 * If true, any actions executed during a call to {@link #act()}) will result in a call to {@link Graphics#requestRendering()}.
 * Widgets that animate or otherwise require additional rendering may check this setting before calling
 * {@link Graphics#requestRendering()}. Default is true.
 */
public void setActionsRequestRendering(boolean actionsRequestRendering) {
    this.actionsRequestRendering = actionsRequestRendering;
}
