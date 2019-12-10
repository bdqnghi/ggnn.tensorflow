@Override
public int hashCode() {
    long result = 61 * attributes.length;
    for (int i = 0; i < attributes.length; i++) result = result * 61 + attributes[i].hashCode();
    return (int) (result ^ (result >> 32));
}
