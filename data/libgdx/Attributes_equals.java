@Override
public boolean equals(Object other) {
    if (!(other instanceof Attributes))
        return false;
    if (other == this)
        return true;
    return same((Attributes) other, true);
}
