@Override
public int hashCode() {
    int result = super.hashCode();
    result = 967 * result + textureDescription.hashCode();
    return result;
}
