@Override
public void arrow(float x1, float y1, float z1, float x2, float y2, float z2, float capLength, float stemThickness, int divisions) {
    Vector3 begin = tmp(x1, y1, z1), end = tmp(x2, y2, z2);
    float length = begin.dst(end);
    float coneHeight = length * capLength;
    float coneDiameter = 2 * (float) (coneHeight * Math.sqrt(1f / 3));
    float stemLength = length - coneHeight;
    float stemDiameter = coneDiameter * stemThickness;
    Vector3 up = tmp(end).sub(begin).nor();
    Vector3 forward = tmp(up).crs(Vector3.Z);
    if (forward.isZero())
        forward.set(Vector3.X);
    forward.crs(up).nor();
    Vector3 left = tmp(up).crs(forward).nor();
    Vector3 direction = tmp(end).sub(begin).nor();
    // Matrices
    Matrix4 userTransform = getVertexTransform(tmp());
    Matrix4 transform = tmp();
    float[] val = transform.val;
    val[Matrix4.M00] = left.x;
    val[Matrix4.M01] = up.x;
    val[Matrix4.M02] = forward.x;
    val[Matrix4.M10] = left.y;
    val[Matrix4.M11] = up.y;
    val[Matrix4.M12] = forward.y;
    val[Matrix4.M20] = left.z;
    val[Matrix4.M21] = up.z;
    val[Matrix4.M22] = forward.z;
    Matrix4 temp = tmp();
    // Stem
    transform.setTranslation(tmp(direction).scl(stemLength / 2).add(x1, y1, z1));
    setVertexTransform(temp.set(transform).mul(userTransform));
    cylinder(stemDiameter, stemLength, stemDiameter, divisions);
    // Cap
    transform.setTranslation(tmp(direction).scl(stemLength).add(x1, y1, z1));
    setVertexTransform(temp.set(transform).mul(userTransform));
    cone(coneDiameter, coneHeight, coneDiameter, divisions);
    setVertexTransform(userTransform);
    cleanup();
}
