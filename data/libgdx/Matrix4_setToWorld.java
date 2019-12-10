public Matrix4 setToWorld(Vector3 position, Vector3 forward, Vector3 up) {
    tmpForward.set(forward).nor();
    right.set(tmpForward).crs(up).nor();
    tmpUp.set(right).crs(tmpForward).nor();
    this.set(right, tmpUp, tmpForward.scl(-1), position);
    return this;
}
