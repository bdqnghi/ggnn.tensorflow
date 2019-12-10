public float[] getValuesY() {
    float[] values = new float[points.size()];
    int i = 0;
    for (Point point : points) values[i++] = point.y;
    return values;
}
