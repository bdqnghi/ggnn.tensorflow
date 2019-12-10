public static boolean intersectSegments(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, Vector2 intersection) {
    float d = (y4 - y3) * (x2 - x1) - (x4 - x3) * (y2 - y1);
    if (d == 0)
        return false;
    float yd = y1 - y3;
    float xd = x1 - x3;
    float ua = ((x4 - x3) * yd - (y4 - y3) * xd) / d;
    if (ua < 0 || ua > 1)
        return false;
    float ub = ((x2 - x1) * yd - (y2 - y1) * xd) / d;
    if (ub < 0 || ub > 1)
        return false;
    if (intersection != null)
        intersection.set(x1 + (x2 - x1) * ua, y1 + (y2 - y1) * ua);
    return true;
}
