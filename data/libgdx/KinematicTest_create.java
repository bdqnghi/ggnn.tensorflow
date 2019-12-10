@Override
public void create() {
    super.create();
    // Create the entities
    world.add("ground", 0f, 0f, 0f).setColor(0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 1f);
    kinematicBox1 = world.add("staticbox", position1.x, position1.y, position1.z);
    kinematicBox1.setColor(Color.RED);
    kinematicBox1.body.setCollisionFlags(kinematicBox1.body.getCollisionFlags() | btCollisionObject.CollisionFlags.CF_KINEMATIC_OBJECT);
    kinematicBox2 = world.add("staticbox", position2.x, position2.y, position2.z);
    kinematicBox2.setColor(Color.RED);
    kinematicBox2.body.setCollisionFlags(kinematicBox2.body.getCollisionFlags() | btCollisionObject.CollisionFlags.CF_KINEMATIC_OBJECT);
    ;
    kinematicBox3 = world.add("staticbox", position3.x, position3.y, position3.z);
    kinematicBox3.setColor(Color.RED);
    kinematicBox3.body.setCollisionFlags(kinematicBox3.body.getCollisionFlags() | btCollisionObject.CollisionFlags.CF_KINEMATIC_OBJECT);
    ;
    // This makes bullet call btMotionState#getWorldTransform on every update:
    kinematicBox3.body.setActivationState(Collision.DISABLE_DEACTIVATION);
    angle = 360f;
}
