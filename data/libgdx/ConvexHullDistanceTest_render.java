@Override
public void render() {
    super.render();
    // Draw the lines of the distances
    camera.update();
    shapeRenderer.setProjectionMatrix(camera.combined);
    shapeRenderer.begin(ShapeType.Line);
    shapeRenderer.setColor(1, 1, 0, 1);
    for (int i = 0; i < world.entities.size; i++) {
        btCollisionObject collisionObject0 = world.entities.get(i).body;
        for (int j = 0; j < world.entities.size; j++) {
            if (i != j) {
                btCollisionObject collisionObject1 = world.entities.get(j).body;
                distance.calculateDistance(collisionObject0, collisionObject1);
                shapeRenderer.line(distance.getVector3()[0], distance.getVector3()[1]);
            }
        }
    }
    shapeRenderer.end();
}
