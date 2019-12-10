/**
 * Updates the renderer used by this controller, usually this means the particles will be draw inside a batch.
 */
public void draw() {
    if (particles.size > 0) {
        renderer.update();
    }
}
