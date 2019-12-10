static public float triangleArea(float x1, float y1, float x2, float y2, float x3, float y3) {
    return Math.abs((x1 - x3) * (y2 - y1) - (x1 - x2) * (y3 - y1)) * 0.5f;
}
