/**
 * This assumes that the projection matrix has already been set.
 */
public void render(World world, Matrix4 projMatrix) {
    renderer.setProjectionMatrix(projMatrix);
    renderBodies(world);
}
