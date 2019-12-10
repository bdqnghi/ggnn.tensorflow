public void getScreenVectorToWorld(Vec2 screen, Vec2 world) {
    box.R.invertToOut(inv);
    inv.mulToOut(screen, world);
    if (yFlip) {
        yFlipMat.mulToOut(world, world);
    }
}
