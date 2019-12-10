public Color getColor(final Color out, int side) {
    side *= 3;
    return out.set(data[side], data[side + 1], data[side + 2], 1f);
}
