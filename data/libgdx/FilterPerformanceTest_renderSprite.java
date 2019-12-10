public void renderSprite() {
    batch.disableBlending();
    if (mode % 2 == 0)
        sprite2.draw(batch);
    else
        sprite.draw(batch);
    batch.enableBlending();
}
