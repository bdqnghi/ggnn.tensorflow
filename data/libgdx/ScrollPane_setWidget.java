/**
 * Sets the {@link Actor} embedded in this scroll pane.
 * @param widget May be null to remove any current actor.
 */
public void setWidget(Actor widget) {
    if (widget == this)
        throw new IllegalArgumentException("widget cannot be the ScrollPane.");
    if (this.widget != null)
        super.removeActor(this.widget);
    this.widget = widget;
    if (widget != null)
        super.addActor(widget);
}
