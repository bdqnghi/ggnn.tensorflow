private void renderBox(Body body, float halfWidth, float halfHeight) {
    // get the bodies center and angle in world coordinates
    Vector2 pos = body.getWorldCenter();
    float angle = body.getAngle();
    // set the translation and rotation matrix
    transform.setToTranslation(pos.x, pos.y, 0);
    transform.rotate(0, 0, 1, (float) Math.toDegrees(angle));
    // render the box
    renderer.begin(ShapeType.Line);
    renderer.setTransformMatrix(transform);
    renderer.setColor(1, 1, 1, 1);
    renderer.rect(-halfWidth, -halfHeight, halfWidth * 2, halfHeight * 2);
    renderer.end();
}
