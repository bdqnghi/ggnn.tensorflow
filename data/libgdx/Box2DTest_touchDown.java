@Override
public boolean touchDown(int x, int y, int pointer, int newParam) {
    // translate the mouse coordinates to world coordinates
    testPoint.set(x, y, 0);
    camera.unproject(testPoint);
    // ask the world which bodies are within the given
    // bounding box around the mouse pointer
    hitBody = null;
    world.QueryAABB(callback, testPoint.x - 0.1f, testPoint.y - 0.1f, testPoint.x + 0.1f, testPoint.y + 0.1f);
    // and attach it to the hit body.
    if (hitBody != null) {
        MouseJointDef def = new MouseJointDef();
        def.bodyA = groundBody;
        def.bodyB = hitBody;
        def.collideConnected = true;
        def.target.set(testPoint.x, testPoint.y);
        def.maxForce = 1000.0f * hitBody.getMass();
        mouseJoint = (MouseJoint) world.createJoint(def);
        hitBody.setAwake(true);
    } else {
        for (Body box : boxes) world.destroyBody(box);
        boxes.clear();
        createBoxes();
    }
    return false;
}
