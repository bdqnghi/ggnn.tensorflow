@Override
public boolean equals(Object o) {
    if (this == o)
        return true;
    if (o == null || getClass() != o.getClass())
        return false;
    Color color = (Color) o;
    return toIntBits() == color.toIntBits();
}
