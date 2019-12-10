/**
 * Does not set the normal member!
 */
protected VertexInfo getVertexAt(final VertexInfo out, int x, int y) {
    final float dx = (float) x / (float) (width - 1);
    final float dy = (float) y / (float) (height - 1);
    final float a = data[y * width + x];
    out.position.set(corner00).lerp(corner10, dx).lerp(tmpV1.set(corner01).lerp(corner11, dx), dy);
    out.position.add(tmpV1.set(magnitude).scl(a));
    out.color.set(color00).lerp(color10, dx).lerp(tmpC.set(color01).lerp(color11, dx), dy);
    out.uv.set(dx, dy).scl(uvScale).add(uvOffset);
    return out;
}
