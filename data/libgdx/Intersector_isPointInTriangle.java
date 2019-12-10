/**
 * Returns true if the given point is inside the triangle.
 */
public static boolean isPointInTriangle(float px, float py, float ax, float ay, float bx, float by, float cx, float cy) {
    float px1 = px - ax;
    float py1 = py - ay;
    boolean side12 = (bx - ax) * py1 - (by - ay) * px1 > 0;
    if ((cx - ax) * py1 - (cy - ay) * px1 > 0 == side12)
        return false;
    if ((cx - bx) * (py - by) - (cy - by) * (px - bx) > 0 != side12)
        return false;
    return true;
}
