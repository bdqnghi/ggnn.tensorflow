@Override
public boolean equals(Object o) {
    if (this == o)
        return true;
    if (o == null || o.getClass() != this.getClass())
        return false;
    Sphere s = (Sphere) o;
    return this.radius == s.radius && this.center.equals(s.center);
}
