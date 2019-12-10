private final int[] getAttributeLocations(final VertexAttributes attrs) {
    tempArray.clear();
    final int n = attrs.size();
    for (int i = 0; i < n; i++) {
        tempArray.add(attributes.get(attrs.get(i).getKey(), -1));
    }
    return tempArray.items;
}
