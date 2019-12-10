/**
 * This has to be used in case the camera to be used is managed via a {@link Viewport}.
 * @param viewport The currently used viewport with its managed (perspective) camera.
 */
public void begin(Viewport viewport) {
    this.viewport = viewport;
    begin(viewport.getCamera());
}
