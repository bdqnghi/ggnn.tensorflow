@Override
public void create() {
    super.create();
    internalTickCallback = new TestInternalTickCallback((btDynamicsWorld) world.collisionWorld);
    // Create the entities
    world.add("ground", 0f, 0f, 0f).setColor(0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 1f);
    for (int x = 0; x < BOXCOUNT_X; x++) {
        for (int y = 0; y < BOXCOUNT_Y; y++) {
            for (int z = 0; z < BOXCOUNT_Z; z++) {
                world.add("box", BOXOFFSET_X + x, BOXOFFSET_Y + y, BOXOFFSET_Z + z).setColor(0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 1f);
            }
        }
    }
}
