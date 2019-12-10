private void fillGroup(Group group, Texture texture) {
    float advance = 32 + SPACING;
    for (int y = 0; y < NUM_SPRITES * advance; y += advance) for (int x = 0; x < NUM_SPRITES * advance; x += advance) {
        Image img = new Image(new TextureRegion(texture));
        img.setAlign(Align.center);
        img.setScaling(Scaling.none);
        img.setBounds(x, y, 32, 32);
        img.setOrigin(16, 16);
        group.addActor(img);
        sprites.add(img);
    }
}
