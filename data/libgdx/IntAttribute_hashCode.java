@Override
public int hashCode() {
    int result = super.hashCode();
    result = 983 * result + value;
    return result;
}
