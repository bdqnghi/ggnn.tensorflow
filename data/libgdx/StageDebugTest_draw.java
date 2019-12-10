@Override
public void draw(Batch batch, float parentAlpha) {
    batch.draw(textureRegion, getX(), getY(), getOriginX(), getOriginY(), getWidth(), getHeight(), getScaleX(), getScaleY(), getRotation());
}
