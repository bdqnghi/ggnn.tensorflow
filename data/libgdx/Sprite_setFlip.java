/**
 * Set the sprite's flip state regardless of current condition
 * @param x the desired horizontal flip state
 * @param y the desired vertical flip state
 */
public void setFlip(boolean x, boolean y) {
    boolean performX = false;
    boolean performY = false;
    if (isFlipX() != x) {
        performX = true;
    }
    if (isFlipY() != y) {
        performY = true;
    }
    flip(performX, performY);
}
