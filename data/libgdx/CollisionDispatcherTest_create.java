@Override
public void create() {
    super.create();
    // Create the entities
    world.add("ground", 0f, 0f, 0f).setColor(0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 1f);
    for (float x = -5f; x <= 5f; x += 2f) {
        for (float y = 5f; y <= 15f; y += 2f) {
            world.add("box", x + 0.1f * MathUtils.random(), y + 0.1f * MathUtils.random(), 0.1f * MathUtils.random()).body.setUserValue((int) ((x + 5f) / 2f + .5f));
        }
    }
}
