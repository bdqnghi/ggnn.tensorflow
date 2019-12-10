public void setSprite(Sprite sprite) {
    this.sprite = sprite;
    if (sprite == null)
        return;
    float originX = sprite.getOriginX();
    float originY = sprite.getOriginY();
    Texture texture = sprite.getTexture();
    for (int i = 0, n = particles.length; i < n; i++) {
        Particle particle = particles[i];
        if (particle == null)
            break;
        particle.setTexture(texture);
        particle.setOrigin(originX, originY);
    }
}
