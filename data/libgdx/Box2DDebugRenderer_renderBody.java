protected void renderBody(Body body) {
    Transform transform = body.getTransform();
    int len = body.getFixtureList().size;
    Array<Fixture> fixtures = body.getFixtureList();
    for (int i = 0; i < len; i++) {
        Fixture fixture = fixtures.get(i);
        if (drawBodies) {
            if (body.isActive() == false && drawInactiveBodies)
                drawShape(fixture, transform, SHAPE_NOT_ACTIVE);
            else if (body.getType() == BodyType.StaticBody)
                drawShape(fixture, transform, SHAPE_STATIC);
            else if (body.getType() == BodyType.KinematicBody)
                drawShape(fixture, transform, SHAPE_KINEMATIC);
            else if (body.isAwake() == false)
                drawShape(fixture, transform, SHAPE_NOT_AWAKE);
            else
                drawShape(fixture, transform, SHAPE_AWAKE);
        }
        if (drawAABBs) {
            drawAABB(fixture, transform);
        }
    }
}
