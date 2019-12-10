/**
 * @param name
 * @return the first layer having the specified name, if one exists, otherwise null
 */
public MapLayer get(String name) {
    for (int i = 0, n = layers.size; i < n; i++) {
        MapLayer layer = layers.get(i);
        if (name.equals(layer.getName())) {
            return layer;
        }
    }
    return null;
}
