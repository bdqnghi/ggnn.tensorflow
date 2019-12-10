@Override
public String toString() {
    StringBuffer buffer = new StringBuffer();
    buffer.append(fileName);
    buffer.append(", ");
    buffer.append(type.getName());
    return buffer.toString();
}
