@Override
public void render() {
    // first we update the world. For simplicity
    // we use the delta time provided by the Graphics
    // instance. Normally you'll want to fix the time
    // step.
    long start = TimeUtils.nanoTime();
    world.step(Gdx.graphics.getDeltaTime(), 8, 3);
    float updateTime = (TimeUtils.nanoTime() - start) / 1000000000.0f;
    // next we clear the color buffer and set the camera
    // matrices
    Gdx.gl.glClear(GL20.GL_COLOR_BUFFER_BIT);
    camera.update();
    // next we render the ground body
    renderBox(groundBody, 50, 1);
    // next we render each box via the SpriteBatch.
    // for this we have to set the projection matrix of the
    // spritebatch to the camera's combined matrix. This will
    // make the spritebatch work in world coordinates
    batch.getProjectionMatrix().set(camera.combined);
    batch.begin();
    for (int i = 0; i < boxes.size(); i++) {
        Body box = boxes.get(i);
        // that's the box's center position
        Vector2 position = box.getPosition();
        // the rotation angle around the center
        float angle = MathUtils.radiansToDegrees * box.getAngle();
        // the bottom left corner of the box, unrotated
        batch.draw(// the bottom left corner of the box, unrotated
        textureRegion, // the bottom left corner of the box, unrotated
        position.x - 1, // the bottom left corner of the box, unrotated
        position.y - 1, // the rotation center relative to the bottom left corner of the box
        1f, // the rotation center relative to the bottom left corner of the box
        1f, // the width and height of the box
        2, // the width and height of the box
        2, // the scale on the x- and y-axis
        1, // the scale on the x- and y-axis
        1, // the rotation angle
        angle);
    }
    batch.end();
    // next we use the debug renderer. Note that we
    // simply apply the camera again and then call
    // the renderer. the camera.apply() call is actually
    // not needed as the opengl matrices are already set
    // by the spritebatch which in turn uses the camera matrices :)
    debugRenderer.render(world, camera.combined);
    // finally we render all contact points
    renderer.setProjectionMatrix(camera.combined);
    renderer.begin(ShapeType.Point);
    renderer.setColor(0, 1, 0, 1);
    for (int i = 0; i < world.getContactCount(); i++) {
        Contact contact = world.getContactList().get(i);
        // we only render the contact if it actually touches
        if (contact.isTouching()) {
            // get the world manifold from which we get the
            // contact points. A manifold can have 0, 1 or 2
            // contact points.
            WorldManifold manifold = contact.getWorldManifold();
            int numContactPoints = manifold.getNumberOfContactPoints();
            for (int j = 0; j < numContactPoints; j++) {
                Vector2 point = manifold.getPoints()[j];
                renderer.point(point.x, point.y, 0);
            }
        }
    }
    renderer.end();
    // finally we render the time it took to update the world
    // for this we have to set the projection matrix again, so
    // we work in pixel coordinates
    batch.getProjectionMatrix().setToOrtho2D(0, 0, Gdx.graphics.getWidth(), Gdx.graphics.getHeight());
    batch.begin();
    font.draw(batch, "fps: " + Gdx.graphics.getFramesPerSecond() + " update time: " + updateTime, 0, 20);
    batch.end();
}
