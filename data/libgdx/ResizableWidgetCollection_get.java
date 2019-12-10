/**
 * Get the globally accessible {@link ResizableWidgetCollection}. In most cases, the global collection can be used for all
 * {@link ResizableWidget}s.
 *
 * @return the global {@link ResizableWidgetCollection}
 */
public static ResizableWidgetCollection get() {
    if (staticCollection == null) {
        staticCollection = new ResizableWidgetCollection();
    }
    return staticCollection;
}
