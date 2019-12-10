public void getScreenToWorld(Vec2 screen, Vec2 world) {
    world.x = screen.x - box.extents.x;
    world.y = screen.y - box.extents.y;
    if (yFlip) {
        yFlipMat.mulToOut(world, world);
    }
    box.R.invertToOut(inv2);
    inv2.mulToOut(world, world);
    world.x += box.center.x;
    world.y += box.center.y;
}
