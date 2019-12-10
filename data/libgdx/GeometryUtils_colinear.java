static public boolean colinear(float x1, float y1, float x2, float y2, float x3, float y3) {
    float dx21 = x2 - x1, dy21 = y2 - y1;
    float dx32 = x3 - x2, dy32 = y3 - y2;
    float det = dx32 * dy21 - dx21 * dy32;
    return Math.abs(det) < MathUtils.FLOAT_ROUNDING_ERROR;
}
