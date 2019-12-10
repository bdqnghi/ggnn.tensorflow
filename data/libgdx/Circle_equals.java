@Override
public boolean equals(Object o) {
    if (o == this)
        return true;
    if (o == null || o.getClass() != this.getClass())
        return false;
    Circle c = (Circle) o;
    return this.x == c.x && this.y == c.y && this.radius == c.radius;
}
