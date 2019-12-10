public void getWorldVectorToScreen(Vec2 world, Vec2 screen) {
    box.R.mulToOut(world, screen);
    if (yFlip) {
        yFlipMat.mulToOut(screen, screen);
    }
}
