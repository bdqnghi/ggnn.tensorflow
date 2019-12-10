@Override
public void create() {
    super.create();
    // Create the entities
    world.add("ground", 0f, 0f, 0f).setColor(0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 1f);
    for (int x = 0; x < BOXCOUNT_X; x++) {
        for (int y = 0; y < BOXCOUNT_Y; y++) {
            for (int z = 0; z < BOXCOUNT_Z; z++) {
                final BulletEntity e = (BulletEntity) world.add("box", BOXOFFSET_X + x * 2f, BOXOFFSET_Y + y * 2f, BOXOFFSET_Z + z * 2f);
                e.setColor(0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 1f);
                e.body.setContactCallbackFlag(2);
                e.body.setContactCallbackFilter(2);
            }
        }
    }
    // Creating a contact listener, also enables that particular type of contact listener and sets it active.
    contactListener = new TestContactListener();
    contactListener.entities = world.entities;
}
