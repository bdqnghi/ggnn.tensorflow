public VertexInfo setCol(Color col) {
    if ((hasColor = col != null) == true)
        color.set(col);
    return this;
}
