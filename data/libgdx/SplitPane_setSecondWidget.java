/**
 * @param widget May be null.
 */
public void setSecondWidget(Actor widget) {
    if (secondWidget != null)
        super.removeActor(secondWidget);
    secondWidget = widget;
    if (widget != null)
        super.addActor(widget);
    invalidate();
}
