public void draw(Batch batch, float x, float y, float originX, float originY, float width, float height, float scaleX, float scaleY, float rotation) {
    Color spriteColor = sprite.getColor();
    float batchColor = batch.getPackedColor();
    sprite.setColor(batch.getColor().mul(spriteColor));
    sprite.setOrigin(originX, originY);
    sprite.setRotation(rotation);
    sprite.setScale(scaleX, scaleY);
    sprite.setBounds(x, y, width, height);
    sprite.draw(batch);
    sprite.setColor(spriteColor);
    batch.setColor(batchColor);
}
