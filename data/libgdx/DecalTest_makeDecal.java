private Decal makeDecal() {
    Decal sprite = null;
    switch(idx % 2) {
        case 0:
            sprite = Decal.newDecal(new TextureRegion(egg), willItBlend_that_is_the_question);
            break;
        case 1:
            sprite = Decal.newDecal(new TextureRegion(wheel));
            break;
    }
    sprite.setPosition(-w / 2 + (float) Math.random() * w, h / 2 - (float) Math.random() * h, (float) -Math.random() * 10);
    idx++;
    return sprite;
}
