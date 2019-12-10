public Vector3 getPositionAt(Vector3 out, int x, int y) {
    final float dx = (float) x / (float) (width - 1);
    final float dy = (float) y / (float) (height - 1);
    final float a = data[y * width + x];
    out.set(corner00).lerp(corner10, dx).lerp(tmpV1.set(corner01).lerp(corner11, dx), dy);
    out.add(tmpV1.set(magnitude).scl(a));
    return out;
}
