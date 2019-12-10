/**
 * Sets the type of {@link Blending} to be used for all operations. Default is {@link Blending#SourceOver}.
 * @param blending the blending type
 */
public static void setBlending(Blending blending) {
    Pixmap.blending = blending;
    Composite composite = getComposite();
    for (Pixmap pixmap : pixmaps.values()) {
        pixmap.context.setGlobalCompositeOperation(composite);
    }
}
