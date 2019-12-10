private void createPhysicsWorld() {
    // we instantiate a new World with a proper gravity vector
    // and tell it to sleep when possible.
    world = new World(new Vector2(0, -10), true);
    float[] vertices = { -0.07421887f, -0.16276085f, -0.12109375f, -0.22786504f, -0.157552f, -0.7122401f, 0.04296875f, -0.7122401f, 0.110677004f, -0.6419276f, 0.13151026f, -0.49869835f, 0.08984375f, -0.3190109f };
    PolygonShape shape = new PolygonShape();
    shape.set(vertices);
    // next we create a static ground platform. This platform
    // is not moveable and will not react to any influences from
    // outside. It will however influence other bodies. First we
    // create a PolygonShape that holds the form of the platform.
    // it will be 100 meters wide and 2 meters high, centered
    // around the origin
    PolygonShape groundPoly = new PolygonShape();
    groundPoly.setAsBox(50, 1);
    // next we create the body for the ground platform. It's
    // simply a static body.
    BodyDef groundBodyDef = new BodyDef();
    groundBodyDef.type = BodyType.StaticBody;
    groundBody = world.createBody(groundBodyDef);
    // finally we add a fixture to the body using the polygon
    // defined above. Note that we have to dispose PolygonShapes
    // and CircleShapes once they are no longer used. This is the
    // only time you have to care explicitly for memory management.
    FixtureDef fixtureDef = new FixtureDef();
    fixtureDef.shape = groundPoly;
    fixtureDef.filter.groupIndex = 0;
    groundBody.createFixture(fixtureDef);
    groundPoly.dispose();
    // We also create a simple ChainShape we put above our
    // ground polygon for extra funkyness.
    ChainShape chainShape = new ChainShape();
    chainShape.createLoop(new Vector2[] { new Vector2(-10, 10), new Vector2(-10, 5), new Vector2(10, 5), new Vector2(10, 11) });
    BodyDef chainBodyDef = new BodyDef();
    chainBodyDef.type = BodyType.StaticBody;
    Body chainBody = world.createBody(chainBodyDef);
    chainBody.createFixture(chainShape, 0);
    chainShape.dispose();
    createBoxes();
    // You can savely ignore the rest of this method :)
    world.setContactListener(new ContactListener() {

        @Override
        public void beginContact(Contact contact) {
        // System.out.println("begin contact");
        }

        @Override
        public void endContact(Contact contact) {
        // System.out.println("end contact");
        }

        @Override
        public void preSolve(Contact contact, Manifold oldManifold) {
        // Manifold.ManifoldType type = oldManifold.getType();
        // Vector2 localPoint = oldManifold.getLocalPoint();
        // Vector2 localNormal = oldManifold.getLocalNormal();
        // int pointCount = oldManifold.getPointCount();
        // ManifoldPoint[] points = oldManifold.getPoints();
        // System.out.println("pre solve, " + type +
        // ", point: " + localPoint +
        // ", local normal: " + localNormal +
        // ", #points: " + pointCount +
        // ", [" + points[0] + ", " + points[1] + "]");
        }

        @Override
        public void postSolve(Contact contact, ContactImpulse impulse) {
        // float[] ni = impulse.getNormalImpulses();
        // float[] ti = impulse.getTangentImpulses();
        // System.out.println("post solve, normal impulses: " + ni[0] + ", " + ni[1] + ", tangent impulses: " + ti[0] + ", " + ti[1]);
        }
    });
}
