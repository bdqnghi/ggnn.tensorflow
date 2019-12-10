@Override
public boolean equals(Object obj) {
    if (this == obj)
        return true;
    if (obj == null)
        return false;
    if (getClass() != obj.getClass())
        return false;
    Mat22 other = (Mat22) obj;
    if (ex == null) {
        if (other.ex != null)
            return false;
    } else if (!ex.equals(other.ex))
        return false;
    if (ey == null) {
        if (other.ey != null)
            return false;
    } else if (!ey.equals(other.ey))
        return false;
    return true;
}
