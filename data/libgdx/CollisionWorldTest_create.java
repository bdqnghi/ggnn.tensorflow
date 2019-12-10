@Override
public void create() {
    super.create();
    instructions = "Long press to toggle debug mode\nSwipe for next test\nCtrl+drag to rotate\nScroll to zoom";
    contactCB = new TestContactResultCallback();
    Model groundModel = world.getConstructor("ground").model;
    Model boxModel = world.getConstructor("box").model;
    world.addConstructor("collisionGround", new BulletConstructor(groundModel));
    world.addConstructor("collisionBox", new BulletConstructor(boxModel));
    world.add("collisionGround", 0f, 0f, 0f).setColor(0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 1f);
    world.add("collisionBox", 0f, 1f, 5f).setColor(0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 1f);
    world.add("collisionBox", 0f, 1f, -5f).setColor(0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 1f);
    world.add("collisionBox", 5f, 1f, 0f).setColor(0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 1f);
    world.add("collisionBox", -5f, 1f, 0f).setColor(0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 1f);
    movingBox = world.add("collisionBox", -5f, 1f, 0f);
    normalColor.set(0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 1f);
}
