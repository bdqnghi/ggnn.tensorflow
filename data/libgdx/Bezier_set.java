public Bezier set(final Array<T> points, final int offset, final int length) {
    if (length < 2 || length > 4)
        throw new GdxRuntimeException("Only first, second and third degree Bezier curves are supported.");
    if (tmp == null)
        tmp = points.get(0).cpy();
    this.points.clear();
    this.points.addAll(points, offset, length);
    return this;
}
