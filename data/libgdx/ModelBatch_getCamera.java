/**
 * Provides access to the current camera in between {@link #begin(Camera)} and {@link #end()}. Do not change the camera's
 * values. Use {@link #setCamera(Camera)}, if you need to change the camera.
 * @return The current camera being used or null if called outside {@link #begin(Camera)} and {@link #end()}.
 */
public Camera getCamera() {
    return camera;
}
