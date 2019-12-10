public float[] getValuesX() {
    float[] values = new float[points.size()];
    int i = 0;
    for (Point point : points) values[i++] = point.x;
    return values;
}
