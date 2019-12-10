/**
 * translate particle given amount. Continuous collision detection achieved by using RayCast from oldPos to newPos.
 *
 * @param velocityX
 * @param velocityY
 */
@Override
public void translate(float velocityX, float velocityY) {
    /**
     * If velocities squares summed is shorter than Epsilon it could lead ~0 length rayCast that cause nasty c++ assertion
     * inside box2d. This is so short distance that moving particle has no effect so this return early.
     */
    if ((velocityX * velocityX + velocityY * velocityY) < EPSILON)
        return;
    /**
     * Position offset is half of sprite texture size.
     */
    final float x = getX() + getWidth() / 2f;
    final float y = getY() + getHeight() / 2f;
    /**
     * collision flag to false
     */
    particleCollided = false;
    startPoint.set(x, y);
    endPoint.set(x + velocityX, y + velocityY);
    if (world != null)
        world.rayCast(rayCallBack, startPoint, endPoint);
    /**
     * If ray collided boolean has set to true at rayCallBack
     */
    if (particleCollided) {
        // perfect reflection
        angle = 2f * normalAngle - angle - 180f;
        angleCos = MathUtils.cosDeg(angle);
        angleSin = MathUtils.sinDeg(angle);
        velocityX *= angleCos;
        velocityY *= angleSin;
    }
    super.translate(velocityX, velocityY);
}
