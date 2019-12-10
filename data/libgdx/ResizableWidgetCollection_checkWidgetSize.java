/**
 * Check to see if any Widgets have been resized and call their handlers appropriately.
 */
public void checkWidgetSize() {
    for (Map.Entry<ResizableWidget, ResizableWidgetInfo> entry : widgets.entrySet()) {
        ResizableWidget widget = entry.getKey();
        ResizableWidgetInfo info = entry.getValue();
        // Call the onResize method only if the widget is attached
        if (info.updateSizes()) {
            // Check that the offset width and height are greater than 0.
            if (info.getOffsetWidth() > 0 && info.getOffsetHeight() > 0 && widget.isAttached()) {
                // Send the client dimensions, which is the space available for
                // rendering.
                widget.onResize(info.getOffsetWidth(), info.getOffsetHeight());
            }
        }
    }
}
