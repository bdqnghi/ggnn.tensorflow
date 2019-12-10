@Override
public void setTransformMatrix(Matrix4 transform) {
    if (drawing)
        flush();
    transformMatrix.set(transform);
    if (drawing)
        setupMatrices();
}
