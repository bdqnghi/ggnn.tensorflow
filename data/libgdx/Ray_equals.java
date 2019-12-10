@Override
public boolean equals(Object o) {
    if (o == this)
        return true;
    if (o == null || o.getClass() != this.getClass())
        return false;
    Ray r = (Ray) o;
    return this.direction.equals(r.direction) && this.origin.equals(r.origin);
}
