@Override
public void setProjectionMatrix(Matrix4 projection) {
    if (drawing)
        flush();
    projectionMatrix.set(projection);
    if (drawing)
        setupMatrices();
}
