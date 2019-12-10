public VertexInfo setUV(Vector2 uv) {
    if ((hasUV = uv != null) == true)
        this.uv.set(uv);
    return this;
}
