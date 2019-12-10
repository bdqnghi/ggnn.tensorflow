public static boolean intersectSegmentPlane(Vector3 start, Vector3 end, Plane plane, Vector3 intersection) {
    Vector3 dir = v0.set(end).sub(start);
    float denom = dir.dot(plane.getNormal());
    float t = -(start.dot(plane.getNormal()) + plane.getD()) / denom;
    if (t < 0 || t > 1)
        return false;
    intersection.set(start).add(dir.scl(t));
    return true;
}
