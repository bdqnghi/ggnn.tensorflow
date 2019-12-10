/**
 * Returns the packed width considering the rotate value, if it is true then it returns the packedHeight, otherwise it
 * returns the packedWidth.
 */
public float getRotatedPackedWidth() {
    return rotate ? packedHeight : packedWidth;
}
