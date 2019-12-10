public VertexInfo setPos(Vector3 pos) {
    if ((hasPosition = pos != null) == true)
        position.set(pos);
    return this;
}
