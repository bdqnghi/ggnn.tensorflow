/**
 * Get the index of the layer in the collection, or -1 if no such layer exists.
 */
public int getIndex(MapLayer layer) {
    return layers.indexOf(layer, true);
}
