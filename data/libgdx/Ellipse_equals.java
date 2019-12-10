@Override
public boolean equals(Object o) {
    if (o == this)
        return true;
    if (o == null || o.getClass() != this.getClass())
        return false;
    Ellipse e = (Ellipse) o;
    return this.x == e.x && this.y == e.y && this.width == e.width && this.height == e.height;
}
