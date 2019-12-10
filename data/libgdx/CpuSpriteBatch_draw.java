@Override
public void draw(TextureRegion region, float width, float height, Affine2 transform) {
    if (!adjustNeeded) {
        super.draw(region, width, height, transform);
    } else {
        drawAdjusted(region, width, height, transform);
    }
}
