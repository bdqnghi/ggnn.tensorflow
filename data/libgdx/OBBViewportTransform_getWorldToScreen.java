public void getWorldToScreen(Vec2 world, Vec2 screen) {
    screen.x = world.x - box.center.x;
    screen.y = world.y - box.center.y;
    box.R.mulToOut(screen, screen);
    if (yFlip) {
        yFlipMat.mulToOut(screen, screen);
    }
    screen.x += box.extents.x;
    screen.y += box.extents.y;
}
