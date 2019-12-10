@Override
public void setView(Matrix4 projection, float x, float y, float width, float height) {
    batch.setProjectionMatrix(projection);
    viewBounds.set(x, y, width, height);
}
