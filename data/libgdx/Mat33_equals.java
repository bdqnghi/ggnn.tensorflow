@Override
public boolean equals(Object obj) {
    if (this == obj)
        return true;
    if (obj == null)
        return false;
    if (getClass() != obj.getClass())
        return false;
    Mat33 other = (Mat33) obj;
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
    if (ez == null) {
        if (other.ez != null)
            return false;
    } else if (!ez.equals(other.ez))
        return false;
    return true;
}
