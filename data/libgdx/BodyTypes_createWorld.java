@Override
protected void createWorld(World world) {
    Body ground;
    {
        BodyDef bd = new BodyDef();
        ground = world.createBody(bd);
        EdgeShape shape = new EdgeShape();
        shape.set(new Vector2(-20, 0), new Vector2(20, 0));
        FixtureDef fd = new FixtureDef();
        fd.shape = shape;
        ground.createFixture(fd);
        shape.dispose();
    }
    {
        BodyDef bd = new BodyDef();
        bd.type = BodyType.DynamicBody;
        bd.position.set(0, 3.0f);
        m_attachment = world.createBody(bd);
        PolygonShape shape = new PolygonShape();
        shape.setAsBox(0.5f, 2.0f);
        m_attachment.createFixture(shape, 2.0f);
        shape.dispose();
    }
    {
        BodyDef bd = new BodyDef();
        bd.type = BodyType.DynamicBody;
        bd.position.set(-4.0f, 5.0f);
        m_platform = world.createBody(bd);
        PolygonShape shape = new PolygonShape();
        shape.setAsBox(0.5f, 4.0f, new Vector2(4.0f, 0), 0.5f * (float) Math.PI);
        FixtureDef fd = new FixtureDef();
        fd.shape = shape;
        fd.friction = 0.6f;
        fd.density = 2.0f;
        m_platform.createFixture(fd);
        shape.dispose();
        RevoluteJointDef rjd = new RevoluteJointDef();
        rjd.initialize(m_attachment, m_platform, new Vector2(0, 5.0f));
        rjd.maxMotorTorque = 50.0f;
        rjd.enableMotor = true;
        world.createJoint(rjd);
        PrismaticJointDef pjd = new PrismaticJointDef();
        pjd.initialize(ground, m_platform, new Vector2(0, 5.0f), new Vector2(1, 0));
        pjd.maxMotorForce = 1000.0f;
        pjd.enableMotor = true;
        pjd.lowerTranslation = -10f;
        pjd.upperTranslation = 10.0f;
        pjd.enableLimit = true;
        world.createJoint(pjd);
        m_speed = 3.0f;
    }
    {
        BodyDef bd = new BodyDef();
        bd.type = BodyType.DynamicBody;
        bd.position.set(0, 8.0f);
        Body body = world.createBody(bd);
        PolygonShape shape = new PolygonShape();
        shape.setAsBox(0.75f, 0.75f);
        FixtureDef fd = new FixtureDef();
        fd.shape = shape;
        fd.friction = 0.6f;
        fd.density = 2.0f;
        body.createFixture(fd);
        shape.dispose();
    }
}
