static public Vector2 quadrilateralCentroid(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, Vector2 centroid) {
    float avgX1 = (x1 + x2 + x3) / 3;
    float avgY1 = (y1 + y2 + y3) / 3;
    float avgX2 = (x1 + x4 + x3) / 3;
    float avgY2 = (y1 + y4 + y3) / 3;
    centroid.x = avgX1 - (avgX1 - avgX2) / 2;
    centroid.y = avgY1 - (avgY1 - avgY2) / 2;
    return centroid;
}
