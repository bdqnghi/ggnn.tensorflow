@Override
public void create() {
    super.create();
    final Model barModel = modelBuilder.createBox(10f, 1f, 1f, new Material(new ColorAttribute(ColorAttribute.Diffuse, Color.WHITE)), Usage.Position | Usage.Normal);
    disposables.add(barModel);
    // mass = 0: static body
    world.addConstructor("bar", new BulletConstructor(barModel, 0f));
    // Create the entities
    world.add("ground", 0f, 0f, 0f).setColor(0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 0.25f + 0.5f * (float) Math.random(), 1f);
    BulletEntity bar = world.add("bar", 0f, 7f, 0f);
    bar.setColor(0.75f + 0.25f * (float) Math.random(), 0.75f + 0.25f * (float) Math.random(), 0.75f + 0.25f * (float) Math.random(), 1f);
    BulletEntity box1 = world.add("box", -4.5f, 6f, 0f);
    box1.setColor(0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 1f);
    btPoint2PointConstraint constraint = new btPoint2PointConstraint((btRigidBody) bar.body, (btRigidBody) box1.body, tmpV1.set(-5, -0.5f, -0.5f), tmpV2.set(-0.5f, 0.5f, -0.5f));
    ((btDynamicsWorld) world.collisionWorld).addConstraint(constraint, false);
    constraints.add(constraint);
    BulletEntity box2 = null;
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            box2 = world.add("box", -3.5f + (float) i, 6f, 0f);
            box2.setColor(0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 1f);
            constraint = new btPoint2PointConstraint((btRigidBody) box1.body, (btRigidBody) box2.body, tmpV1.set(0.5f, -0.5f, 0.5f), tmpV2.set(-0.5f, -0.5f, 0.5f));
        } else {
            box1 = world.add("box", -3.5f + (float) i, 6f, 0f);
            box1.setColor(0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 0.5f + 0.5f * (float) Math.random(), 1f);
            constraint = new btPoint2PointConstraint((btRigidBody) box2.body, (btRigidBody) box1.body, tmpV1.set(0.5f, 0.5f, -0.5f), tmpV2.set(-0.5f, 0.5f, -0.5f));
        }
        ((btDynamicsWorld) world.collisionWorld).addConstraint(constraint, false);
        constraints.add(constraint);
    }
    constraint = new btPoint2PointConstraint((btRigidBody) bar.body, (btRigidBody) box1.body, tmpV1.set(5f, -0.5f, -0.5f), tmpV2.set(0.5f, 0.5f, -0.5f));
    ((btDynamicsWorld) world.collisionWorld).addConstraint(constraint, false);
    constraints.add(constraint);
}
