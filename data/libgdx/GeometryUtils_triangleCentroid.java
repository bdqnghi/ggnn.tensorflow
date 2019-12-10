static public Vector2 triangleCentroid(float x1, float y1, float x2, float y2, float x3, float y3, Vector2 centroid) {
    centroid.x = (x1 + x2 + x3) / 3;
    centroid.y = (y1 + y2 + y3) / 3;
    return centroid;
}
