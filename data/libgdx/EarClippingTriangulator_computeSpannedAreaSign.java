static private int computeSpannedAreaSign(float p1x, float p1y, float p2x, float p2y, float p3x, float p3y) {
    float area = p1x * (p3y - p2y);
    area += p2x * (p1y - p3y);
    area += p3x * (p2y - p1y);
    return (int) Math.signum(area);
}
