@Override
public void create() {
    super.create();
    instructions = "Tap to shoot\nDrag ragdoll to pick\nLong press to toggle debug mode\nSwipe for next test\nCtrl+drag to rotate\nScroll to zoom";
    camera.position.set(4f, 2f, 4f);
    camera.lookAt(0f, 1f, 0f);
    camera.update();
    world.addConstructor("pelvis", new BulletConstructor(createCapsuleModel(0.15f, 0.2f), 1f, new btCapsuleShape(0.15f, 0.2f)));
    world.addConstructor("spine", new BulletConstructor(createCapsuleModel(0.15f, 0.28f), 1f, new btCapsuleShape(0.15f, 0.28f)));
    world.addConstructor("head", new BulletConstructor(createCapsuleModel(0.1f, 0.05f), 1f, new btCapsuleShape(0.1f, 0.05f)));
    world.addConstructor("upperleg", new BulletConstructor(createCapsuleModel(0.07f, 0.45f), 1f, new btCapsuleShape(0.07f, 0.45f)));
    world.addConstructor("lowerleg", new BulletConstructor(createCapsuleModel(0.05f, 0.37f), 1f, new btCapsuleShape(0.05f, 0.37f)));
    world.addConstructor("upperarm", new BulletConstructor(createCapsuleModel(0.05f, 0.33f), 1f, new btCapsuleShape(0.05f, 0.33f)));
    world.addConstructor("lowerarm", new BulletConstructor(createCapsuleModel(0.04f, 0.25f), 1f, new btCapsuleShape(0.04f, 0.25f)));
    world.add("ground", 0f, 0f, 0f).setColor(0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 1f);
    addRagdoll(0, 3f, 0);
    addRagdoll(1f, 6f, 0);
    addRagdoll(-1f, 12f, 0);
}
