@Override
public void create() {
    super.create();
    instructions = "Tap a box to ray cast\nLong press to toggle debug mode\nSwipe for next test\nCtrl+drag to rotate\nScroll to zoom";
    // Create the entities
    world.add("ground", -7f, 0f, -7f).setColor(0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 1f);
    for (int x = 0; x < BOXCOUNT_X; x++) {
        for (int y = 0; y < BOXCOUNT_Y; y++) {
            for (int z = 0; z < BOXCOUNT_Z; z++) {
                world.add("box", BOXOFFSET_X + x, BOXOFFSET_Y + y, BOXOFFSET_Z + z).setColor(0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 1f);
            }
        }
    }
    rayTestCB = new ClosestRayResultCallback(Vector3.Zero, Vector3.Z);
}
