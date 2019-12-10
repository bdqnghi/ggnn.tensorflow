@Override
public int hashCode() {
    int result = super.hashCode();
    result = 953 * result + color.toIntBits();
    return result;
}
