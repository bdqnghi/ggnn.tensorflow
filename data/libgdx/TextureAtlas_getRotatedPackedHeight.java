/**
 * Returns the packed height considering the rotate value, if it is true then it returns the packedWidth, otherwise it
 * returns the packedHeight.
 */
public float getRotatedPackedHeight() {
    return rotate ? packedWidth : packedHeight;
}
