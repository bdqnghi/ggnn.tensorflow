/**
 * Inform the {@link ResizableWidgetCollection} that the size of a widget has changed and already been redrawn. This will
 * prevent the widget from being redrawn on the next loop.
 *
 * @param widget the widget's size that changed
 */
public void updateWidgetSize(ResizableWidget widget) {
    if (!widget.isAttached()) {
        return;
    }
    ResizableWidgetInfo info = widgets.get(widget);
    if (info != null) {
        info.updateSizes();
    }
}
