/**
 * @see ScissorStack#calculateScissors(Camera, float, float, float, float, Matrix4, Rectangle, Rectangle)
 */
public void calculateScissors(Matrix4 batchTransform, Rectangle area, Rectangle scissor) {
    ScissorStack.calculateScissors(camera, screenX, screenY, screenWidth, screenHeight, batchTransform, area, scissor);
}
