@Override
public void layout() {
    if (!vertical)
        calculateHorizBoundsAndPositions();
    else
        calculateVertBoundsAndPositions();
    Actor firstWidget = this.firstWidget;
    if (firstWidget != null) {
        Rectangle firstWidgetBounds = this.firstWidgetBounds;
        firstWidget.setBounds(firstWidgetBounds.x, firstWidgetBounds.y, firstWidgetBounds.width, firstWidgetBounds.height);
        if (firstWidget instanceof Layout)
            ((Layout) firstWidget).validate();
    }
    Actor secondWidget = this.secondWidget;
    if (secondWidget != null) {
        Rectangle secondWidgetBounds = this.secondWidgetBounds;
        secondWidget.setBounds(secondWidgetBounds.x, secondWidgetBounds.y, secondWidgetBounds.width, secondWidgetBounds.height);
        if (secondWidget instanceof Layout)
            ((Layout) secondWidget).validate();
    }
}
