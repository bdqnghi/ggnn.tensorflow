/**
 * @param type class of the objects we want to retrieve
 * @param fill collection to put the returned objects in
 * @return array filled with all the objects in the collection matching type
 */
public <T extends MapObject> Array<T> getByType(Class<T> type, Array<T> fill) {
    fill.clear();
    for (int i = 0, n = objects.size; i < n; i++) {
        MapObject object = objects.get(i);
        if (ClassReflection.isInstance(type, object)) {
            fill.add((T) object);
        }
    }
    return fill;
}
