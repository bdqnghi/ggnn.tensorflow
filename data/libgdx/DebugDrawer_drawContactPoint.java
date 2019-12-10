@Override
public void drawContactPoint(Vector3 pointOnB, Vector3 normalOnB, float distance, int lifeTime, Vector3 color) {
    shapeRenderer.setColor(color.x, color.y, color.z, 1f);
    shapeRenderer.point(pointOnB.x, pointOnB.y, pointOnB.z);
    shapeRenderer.line(pointOnB, normalOnB.scl(distance).add(pointOnB));
}
