public BSpline set(final T[] controlPoints, final int degree, final boolean continuous) {
    if (tmp == null)
        tmp = controlPoints[0].cpy();
    if (tmp2 == null)
        tmp2 = controlPoints[0].cpy();
    if (tmp3 == null)
        tmp3 = controlPoints[0].cpy();
    this.controlPoints = controlPoints;
    this.degree = degree;
    this.continuous = continuous;
    this.spanCount = continuous ? controlPoints.length : controlPoints.length - degree;
    if (knots == null)
        knots = new Array<T>(spanCount);
    else {
        knots.clear();
        knots.ensureCapacity(spanCount);
    }
    for (int i = 0; i < spanCount; i++) knots.add(calculate(controlPoints[0].cpy(), continuous ? i : (int) (i + 0.5f * degree), 0f, controlPoints, degree, continuous, tmp));
    return this;
}
