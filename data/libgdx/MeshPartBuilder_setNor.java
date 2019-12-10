public VertexInfo setNor(Vector3 nor) {
    if ((hasNormal = nor != null) == true)
        normal.set(nor);
    return this;
}
