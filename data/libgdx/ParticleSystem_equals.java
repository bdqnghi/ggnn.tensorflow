@Override
public boolean equals(Object obj) {
    if (this == obj)
        return true;
    if (obj == null)
        return false;
    if (getClass() != obj.getClass())
        return false;
    Proxy other = (Proxy) obj;
    if (tag != other.tag)
        return false;
    return true;
}
