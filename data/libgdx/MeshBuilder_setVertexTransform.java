@Override
public void setVertexTransform(Matrix4 transform) {
    if ((vertexTransformationEnabled = (transform != null)) == true) {
        positionTransform.set(transform);
        normalTransform.set(transform).inv().transpose();
    } else {
        positionTransform.idt();
        normalTransform.idt();
    }
}
