@Override
public Matrix4 getTransformMatrix() {
    return (adjustNeeded ? virtualMatrix : super.getTransformMatrix());
}
