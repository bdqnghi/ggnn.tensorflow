public void create() {
    cam = new OrthographicCamera(48, 32);
    cam.position.set(0, 15, 0);
    renderer = new Box2DDebugRenderer();
    world = new World(new Vector2(0, -10), true);
    Body body = world.createBody(new BodyDef());
    CircleShape shape = new CircleShape();
    shape.setRadius(1f);
    MassData mass = new MassData();
    mass.mass = 1f;
    body.setMassData(mass);
    body.setFixedRotation(true);
    body.setType(BodyType.KinematicBody);
    body.createFixture(shape, 1);
    body.setBullet(true);
    body.setTransform(new Vector2(0, 0), body.getAngle());
    body.setLinearVelocity(new Vector2(50f, 0));
}
