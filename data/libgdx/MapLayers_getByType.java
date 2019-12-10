/**
 * @param type
 * @param fill array to be filled with the matching layers
 * @return array with all the layers matching type
 */
public <T extends MapLayer> Array<T> getByType(Class<T> type, Array<T> fill) {
    fill.clear();
    for (int i = 0, n = layers.size; i < n; i++) {
        MapLayer layer = layers.get(i);
        if (ClassReflection.isInstance(type, layer)) {
            fill.add((T) layer);
        }
    }
    return fill;
}
