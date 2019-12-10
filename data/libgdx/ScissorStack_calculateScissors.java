/**
 * Calculates a scissor rectangle in OpenGL ES window coordinates from a {@link Camera}, a transformation {@link Matrix4} and
 * an axis aligned {@link Rectangle}. The rectangle will get transformed by the camera and transform matrices and is then
 * projected to screen coordinates. Note that only axis aligned rectangles will work with this method. If either the Camera or
 * the Matrix4 have rotational components, the output of this method will not be suitable for
 * {@link GL20#glScissor(int, int, int, int)}.
 * @param camera the {@link Camera}
 * @param batchTransform the transformation {@link Matrix4}
 * @param area the {@link Rectangle} to transform to window coordinates
 * @param scissor the Rectangle to store the result in
 */
public static void calculateScissors(Camera camera, float viewportX, float viewportY, float viewportWidth, float viewportHeight, Matrix4 batchTransform, Rectangle area, Rectangle scissor) {
    tmp.set(area.x, area.y, 0);
    tmp.mul(batchTransform);
    camera.project(tmp, viewportX, viewportY, viewportWidth, viewportHeight);
    scissor.x = tmp.x;
    scissor.y = tmp.y;
    tmp.set(area.x + area.width, area.y + area.height, 0);
    tmp.mul(batchTransform);
    camera.project(tmp, viewportX, viewportY, viewportWidth, viewportHeight);
    scissor.width = tmp.x - scissor.x;
    scissor.height = tmp.y - scissor.y;
}
