public CatmullRomSpline set(final T[] controlPoints, final boolean continuous) {
    if (tmp == null)
        tmp = controlPoints[0].cpy();
    if (tmp2 == null)
        tmp2 = controlPoints[0].cpy();
    if (tmp3 == null)
        tmp3 = controlPoints[0].cpy();
    this.controlPoints = controlPoints;
    this.continuous = continuous;
    this.spanCount = continuous ? controlPoints.length : controlPoints.length - 3;
    return this;
}
