/**
 * Add a resizable widget to the collection.
 *
 * @param widget the resizable widget to add
 */
public void add(ResizableWidget widget) {
    widgets.put(widget, new ResizableWidgetInfo(widget));
}
