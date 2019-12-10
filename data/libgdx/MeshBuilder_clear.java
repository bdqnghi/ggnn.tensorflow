/**
 * Clears the data being built up until now, including the vertices, indices and all parts. Must be called in between the call
 * to #begin and #end. Any builder calls made from the last call to #begin up until now are practically discarded. The state
 * (e.g. UV region, color, vertex transform) will remain unchanged.
 */
public void clear() {
    this.vertices.clear();
    this.indices.clear();
    this.parts.clear();
    this.vindex = 0;
    this.lastIndex = -1;
    this.istart = 0;
    this.part = null;
}
