@Override
protected void createWorld(World world) {
    Body ground;
    {
        BodyDef bd = new BodyDef();
        ground = world.createBody(bd);
        EdgeShape shape = new EdgeShape();
        shape.set(new Vector2(-40, 0), new Vector2(40, 0));
        ground.createFixture(shape, 0);
        shape.dispose();
    }
    {
        PolygonShape shape = new PolygonShape();
        shape.setAsBox(2, 5);
        BodyDef bd = new BodyDef();
        bd.type = BodyType.DynamicBody;
        bd.position.set(-10, 10);
        bd.angle = 0.5f * (float) Math.PI;
        bd.allowSleep = false;
        Body body = world.createBody(bd);
        body.createFixture(shape, 5.0f);
        PrismaticJointDef pjd = new PrismaticJointDef();
        Vector2 axis = new Vector2(2, 1);
        axis.nor();
        pjd.initialize(ground, body, new Vector2(0, 0), axis);
        pjd.motorSpeed = 10.0f;
        pjd.maxMotorForce = 10000.0f;
        pjd.enableMotor = true;
        pjd.lowerTranslation = 0;
        pjd.upperTranslation = 20.0f;
        pjd.enableLimit = true;
        m_joint = (PrismaticJoint) world.createJoint(pjd);
    }
}
