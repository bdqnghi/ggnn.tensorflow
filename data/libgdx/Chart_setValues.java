public void setValues(float[] x, float[] y) {
    points.clear();
    for (int i = 0; i < x.length; i++) points.add(new Point(x[i], y[i]));
}
