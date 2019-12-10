@Override
public boolean equals(Object o) {
    if (o == this)
        return true;
    if (o == null || o.getClass() != this.getClass())
        return false;
    Segment s = (Segment) o;
    return this.a.equals(s.a) && this.b.equals(s.b);
}
