@Override
public boolean equals(Object obj) {
    if (obj == null)
        return false;
    if (obj == this)
        return true;
    if (!(obj instanceof Attribute))
        return false;
    final Attribute other = (Attribute) obj;
    if (this.type != other.type)
        return false;
    return equals(other);
}
