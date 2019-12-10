@Override
public void drawLine(Vector3 from, Vector3 to, Vector3 color) {
    shapeRenderer.setColor(color.x, color.y, color.z, 1f);
    shapeRenderer.line(from, to);
}
