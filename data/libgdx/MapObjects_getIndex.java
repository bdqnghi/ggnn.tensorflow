/**
 * Get the index of the object in the collection, or -1 if no such object exists.
 */
public int getIndex(MapObject object) {
    return objects.indexOf(object, true);
}
