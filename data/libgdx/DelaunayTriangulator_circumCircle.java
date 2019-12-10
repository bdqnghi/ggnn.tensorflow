/**
 * Returns INSIDE if point xp,yp is inside the circumcircle made up of the points x1,y1, x2,y2, x3,y3. Returns COMPLETE if xp
 * is to the right of the entire circumcircle. Otherwise returns INCOMPLETE. Note: a point on the circumcircle edge is
 * considered inside.
 */
private int circumCircle(float xp, float yp, float x1, float y1, float x2, float y2, float x3, float y3) {
    float xc, yc;
    float y1y2 = Math.abs(y1 - y2);
    float y2y3 = Math.abs(y2 - y3);
    if (y1y2 < EPSILON) {
        if (y2y3 < EPSILON)
            return INCOMPLETE;
        float m2 = -(x3 - x2) / (y3 - y2);
        float mx2 = (x2 + x3) / 2f;
        float my2 = (y2 + y3) / 2f;
        xc = (x2 + x1) / 2f;
        yc = m2 * (xc - mx2) + my2;
    } else {
        float m1 = -(x2 - x1) / (y2 - y1);
        float mx1 = (x1 + x2) / 2f;
        float my1 = (y1 + y2) / 2f;
        if (y2y3 < EPSILON) {
            xc = (x3 + x2) / 2f;
            yc = m1 * (xc - mx1) + my1;
        } else {
            float m2 = -(x3 - x2) / (y3 - y2);
            float mx2 = (x2 + x3) / 2f;
            float my2 = (y2 + y3) / 2f;
            xc = (m1 * mx1 - m2 * mx2 + my2 - my1) / (m1 - m2);
            yc = m1 * (xc - mx1) + my1;
        }
    }
    float dx = x2 - xc;
    float dy = y2 - yc;
    float rsqr = dx * dx + dy * dy;
    dx = xp - xc;
    dx *= dx;
    dy = yp - yc;
    if (dx + dy * dy - rsqr <= EPSILON)
        return INSIDE;
    return xp > xc && dx > rsqr ? COMPLETE : INCOMPLETE;
}
