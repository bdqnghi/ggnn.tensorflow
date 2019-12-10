@Override
public boolean equals(final Object arg0) {
    if (arg0 == null)
        return false;
    if (arg0 == this)
        return true;
    if (!(arg0 instanceof MeshPart))
        return false;
    return equals((MeshPart) arg0);
}
