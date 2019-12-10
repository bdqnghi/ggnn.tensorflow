@Override
public int hashCode() {
    int result = getKey();
    result = 541 * result + numComponents;
    result = 541 * result + alias.hashCode();
    return result;
}
