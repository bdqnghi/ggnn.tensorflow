@Override
public boolean equals(Object o) {
    if (this == o)
        return true;
    if (o == null || o.getClass() != this.getClass())
        return false;
    GridPoint2 g = (GridPoint2) o;
    return this.x == g.x && this.y == g.y;
}
