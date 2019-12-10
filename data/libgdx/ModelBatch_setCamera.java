/**
 * Change the camera in between {@link #begin(Camera)} and {@link #end()}. This causes the batch to be flushed. Can only be
 * called after the call to {@link #begin(Camera)} and before the call to {@link #end()}.
 * @param cam The new camera to use.
 */
public void setCamera(final Camera cam) {
    if (camera == null)
        throw new GdxRuntimeException("Call begin() first.");
    if (renderables.size > 0)
        flush();
    camera = cam;
}
