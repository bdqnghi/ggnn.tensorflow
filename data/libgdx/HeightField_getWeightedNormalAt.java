public Vector3 getWeightedNormalAt(Vector3 out, int x, int y) {
    // This commented code is based on http://www.flipcode.com/archives/Calculating_Vertex_Normals_for_Height_Maps.shtml
    // Note that this approach only works for a heightfield on the XZ plane with a magnitude on the y axis
    // float sx = data[(x < width - 1 ? x + 1 : x) + y * width] + data[(x > 0 ? x-1 : x) + y * width];
    // if (x == 0 || x == (width - 1))
    // sx *= 2f;
    // float sy = data[(y < height - 1 ? y + 1 : y) * width + x] + data[(y > 0 ? y-1 : y) * width + x];
    // if (y == 0 || y == (height - 1))
    // sy *= 2f;
    // float xScale = (corner11.x - corner00.x) / (width - 1f);
    // float zScale = (corner11.z - corner00.z) / (height - 1f);
    // float yScale = magnitude.len();
    // out.set(-sx * yScale, 2f * xScale, sy*yScale*xScale / zScale).nor();
    // return out;
    // The following approach weights the normal of the four triangles (half quad) surrounding the position.
    // A more accurate approach would be to weight the normal of the actual triangles.
    int faces = 0;
    out.set(0, 0, 0);
    Vector3 center = getPositionAt(tmpV2, x, y);
    Vector3 left = x > 0 ? getPositionAt(tmpV3, x - 1, y) : null;
    Vector3 right = x < (width - 1) ? getPositionAt(tmpV4, x + 1, y) : null;
    Vector3 bottom = y > 0 ? getPositionAt(tmpV5, x, y - 1) : null;
    Vector3 top = y < (height - 1) ? getPositionAt(tmpV6, x, y + 1) : null;
    if (top != null && left != null) {
        out.add(tmpV7.set(top).sub(center).nor().crs(tmpV8.set(center).sub(left).nor()).nor());
        faces++;
    }
    if (left != null && bottom != null) {
        out.add(tmpV7.set(left).sub(center).nor().crs(tmpV8.set(center).sub(bottom).nor()).nor());
        faces++;
    }
    if (bottom != null && right != null) {
        out.add(tmpV7.set(bottom).sub(center).nor().crs(tmpV8.set(center).sub(right).nor()).nor());
        faces++;
    }
    if (right != null && top != null) {
        out.add(tmpV7.set(right).sub(center).nor().crs(tmpV8.set(center).sub(top).nor()).nor());
        faces++;
    }
    if (faces != 0)
        out.scl(1f / (float) faces);
    else
        out.set(magnitude).nor();
    return out;
}
