/**
 * Check whether polygons defined by the given counter-clockwise wound vertex arrays overlap. If they do, optionally obtain a Minimum Translation
 * Vector indicating the minimum magnitude vector required to push the polygon defined by verts1 out of the collision with the polygon defined by verts2.
 *
 * @param verts1 Vertices of the first polygon.
 * @param verts2 Vertices of the second polygon.
 * @param mtv A Minimum Translation Vector to fill in the case of a collision, or null (optional).
 * @return Whether polygons overlap.
 */
public static boolean overlapConvexPolygons(float[] verts1, int offset1, int count1, float[] verts2, int offset2, int count2, MinimumTranslationVector mtv) {
    float overlap = Float.MAX_VALUE;
    float smallestAxisX = 0;
    float smallestAxisY = 0;
    int numInNormalDir;
    int end1 = offset1 + count1;
    int end2 = offset2 + count2;
    // Get polygon1 axes
    for (int i = offset1; i < end1; i += 2) {
        float x1 = verts1[i];
        float y1 = verts1[i + 1];
        float x2 = verts1[(i + 2) % count1];
        float y2 = verts1[(i + 3) % count1];
        float axisX = y1 - y2;
        float axisY = -(x1 - x2);
        final float length = (float) Math.sqrt(axisX * axisX + axisY * axisY);
        axisX /= length;
        axisY /= length;
        // -- Begin check for separation on this axis --//
        // Project polygon1 onto this axis
        float min1 = axisX * verts1[0] + axisY * verts1[1];
        float max1 = min1;
        for (int j = offset1; j < end1; j += 2) {
            float p = axisX * verts1[j] + axisY * verts1[j + 1];
            if (p < min1) {
                min1 = p;
            } else if (p > max1) {
                max1 = p;
            }
        }
        // Project polygon2 onto this axis
        numInNormalDir = 0;
        float min2 = axisX * verts2[0] + axisY * verts2[1];
        float max2 = min2;
        for (int j = offset2; j < end2; j += 2) {
            // Counts the number of points that are within the projected area.
            numInNormalDir -= pointLineSide(x1, y1, x2, y2, verts2[j], verts2[j + 1]);
            float p = axisX * verts2[j] + axisY * verts2[j + 1];
            if (p < min2) {
                min2 = p;
            } else if (p > max2) {
                max2 = p;
            }
        }
        if (!(min1 <= min2 && max1 >= min2 || min2 <= min1 && max2 >= min1)) {
            return false;
        } else {
            float o = Math.min(max1, max2) - Math.max(min1, min2);
            if (min1 < min2 && max1 > max2 || min2 < min1 && max2 > max1) {
                float mins = Math.abs(min1 - min2);
                float maxs = Math.abs(max1 - max2);
                if (mins < maxs) {
                    o += mins;
                } else {
                    o += maxs;
                }
            }
            if (o < overlap) {
                overlap = o;
                // Adjusts the direction based on the number of points found
                smallestAxisX = numInNormalDir >= 0 ? axisX : -axisX;
                smallestAxisY = numInNormalDir >= 0 ? axisY : -axisY;
            }
        }
    // -- End check for separation on this axis --//
    }
    // Get polygon2 axes
    for (int i = offset2; i < end2; i += 2) {
        float x1 = verts2[i];
        float y1 = verts2[i + 1];
        float x2 = verts2[(i + 2) % count2];
        float y2 = verts2[(i + 3) % count2];
        float axisX = y1 - y2;
        float axisY = -(x1 - x2);
        final float length = (float) Math.sqrt(axisX * axisX + axisY * axisY);
        axisX /= length;
        axisY /= length;
        // -- Begin check for separation on this axis --//
        numInNormalDir = 0;
        // Project polygon1 onto this axis
        float min1 = axisX * verts1[0] + axisY * verts1[1];
        float max1 = min1;
        for (int j = offset1; j < end1; j += 2) {
            float p = axisX * verts1[j] + axisY * verts1[j + 1];
            // Counts the number of points that are within the projected area.
            numInNormalDir -= pointLineSide(x1, y1, x2, y2, verts1[j], verts1[j + 1]);
            if (p < min1) {
                min1 = p;
            } else if (p > max1) {
                max1 = p;
            }
        }
        // Project polygon2 onto this axis
        float min2 = axisX * verts2[0] + axisY * verts2[1];
        float max2 = min2;
        for (int j = offset2; j < end2; j += 2) {
            float p = axisX * verts2[j] + axisY * verts2[j + 1];
            if (p < min2) {
                min2 = p;
            } else if (p > max2) {
                max2 = p;
            }
        }
        if (!(min1 <= min2 && max1 >= min2 || min2 <= min1 && max2 >= min1)) {
            return false;
        } else {
            float o = Math.min(max1, max2) - Math.max(min1, min2);
            if (min1 < min2 && max1 > max2 || min2 < min1 && max2 > max1) {
                float mins = Math.abs(min1 - min2);
                float maxs = Math.abs(max1 - max2);
                if (mins < maxs) {
                    o += mins;
                } else {
                    o += maxs;
                }
            }
            if (o < overlap) {
                overlap = o;
                // Adjusts the direction based on the number of points found
                smallestAxisX = numInNormalDir < 0 ? axisX : -axisX;
                smallestAxisY = numInNormalDir < 0 ? axisY : -axisY;
            }
        }
    // -- End check for separation on this axis --//
    }
    if (mtv != null) {
        mtv.normal.set(smallestAxisX, smallestAxisY);
        mtv.depth = overlap;
    }
    return true;
}
