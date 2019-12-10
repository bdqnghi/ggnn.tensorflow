/**
 * Generate fling gesture.
 * @param flingTime Time in seconds for which you want to fling last.
 * @param velocityX Velocity for horizontal direction.
 * @param velocityY Velocity for vertical direction.
 */
public void fling(float flingTime, float velocityX, float velocityY) {
    this.flingTimer = flingTime;
    this.velocityX = velocityX;
    this.velocityY = velocityY;
}
