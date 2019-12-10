/**
 * Transforms a point to real screen coordinates (as opposed to OpenGL ES window coordinates), where the origin is in the top
 * left and the the y-axis is pointing downwards.
 */
public Vector2 toScreenCoordinates(Vector2 worldCoords, Matrix4 transformMatrix) {
    tmp.set(worldCoords.x, worldCoords.y, 0);
    tmp.mul(transformMatrix);
    camera.project(tmp);
    tmp.y = Gdx.graphics.getHeight() - tmp.y;
    worldCoords.x = tmp.x;
    worldCoords.y = tmp.y;
    return worldCoords;
}
