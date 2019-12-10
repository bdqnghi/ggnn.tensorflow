/**
 * @param widget May be null.
 */
public void setFirstWidget(Actor widget) {
    if (firstWidget != null)
        super.removeActor(firstWidget);
    firstWidget = widget;
    if (widget != null)
        super.addActor(widget);
    invalidate();
}
