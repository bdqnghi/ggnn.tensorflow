@Override
public void create() {
    super.create();
    instructions = "Tap to shoot\nArrow keys to move\nR to reset\nLong press to toggle debug mode\nSwipe for next test";
    // Create a visual representation of the character (note that we don't use the physics part of BulletEntity, we'll do that manually)
    final Texture texture = new Texture(Gdx.files.internal("data/badlogic.jpg"));
    disposables.add(texture);
    final Material material = new Material(TextureAttribute.createDiffuse(texture), ColorAttribute.createSpecular(1, 1, 1, 1), FloatAttribute.createShininess(8f));
    final long attributes = Usage.Position | Usage.Normal | Usage.TextureCoordinates;
    final Model capsule = modelBuilder.createCapsule(2f, 6f, 16, material, attributes);
    disposables.add(capsule);
    world.addConstructor("capsule", new BulletConstructor(capsule, null));
    character = world.add("capsule", 5f, 3f, 5f);
    // Set by reference
    characterTransform = character.transform;
    // Create the physics representation of the character
    ghostObject = new btPairCachingGhostObject();
    ghostObject.setWorldTransform(characterTransform);
    ghostShape = new btCapsuleShape(2f, 2f);
    ghostObject.setCollisionShape(ghostShape);
    ghostObject.setCollisionFlags(btCollisionObject.CollisionFlags.CF_CHARACTER_OBJECT);
    characterController = new btKinematicCharacterController(ghostObject, ghostShape, .35f);
    // And add it to the physics world
    world.collisionWorld.addCollisionObject(ghostObject, (short) btBroadphaseProxy.CollisionFilterGroups.CharacterFilter, (short) (btBroadphaseProxy.CollisionFilterGroups.StaticFilter | btBroadphaseProxy.CollisionFilterGroups.DefaultFilter));
    ((btDiscreteDynamicsWorld) (world.collisionWorld)).addAction(characterController);
    // Add the ground
    (ground = world.add("ground", 0f, 0f, 0f)).setColor(0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 1f);
    // Create some boxes to play with
    for (int x = 0; x < BOXCOUNT_X; x++) {
        for (int y = 0; y < BOXCOUNT_Y; y++) {
            for (int z = 0; z < BOXCOUNT_Z; z++) {
                world.add("box", BOXOFFSET_X + x, BOXOFFSET_Y + y, BOXOFFSET_Z + z).setColor(0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 1f);
            }
        }
    }
}
