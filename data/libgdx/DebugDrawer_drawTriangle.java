@Override
public void drawTriangle(Vector3 v0, Vector3 v1, Vector3 v2, Vector3 color, float arg4) {
    shapeRenderer.setColor(color.x, color.y, color.z, arg4);
    shapeRenderer.line(v0, v1);
    shapeRenderer.line(v1, v2);
    shapeRenderer.line(v2, v0);
}
