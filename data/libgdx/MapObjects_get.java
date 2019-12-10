/**
 * @param name
 * @return the first object having the specified name, if one exists, otherwise null
 */
public MapObject get(String name) {
    for (int i = 0, n = objects.size; i < n; i++) {
        MapObject object = objects.get(i);
        if (name.equals(object.getName())) {
            return object;
        }
    }
    return null;
}
