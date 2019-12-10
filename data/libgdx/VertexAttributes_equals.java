@Override
public boolean equals(final Object obj) {
    if (obj == this)
        return true;
    if (!(obj instanceof VertexAttributes))
        return false;
    VertexAttributes other = (VertexAttributes) obj;
    if (this.attributes.length != other.attributes.length)
        return false;
    for (int i = 0; i < attributes.length; i++) {
        if (!attributes[i].equals(other.attributes[i]))
            return false;
    }
    return true;
}
