/**
 * Calculates a mask based on the contained {@link VertexAttribute} instances. The mask is a bit-wise or of each attributes
 * {@link VertexAttribute#usage}.
 * @return the mask
 */
public long getMask() {
    if (mask == -1) {
        long result = 0;
        for (int i = 0; i < attributes.length; i++) {
            result |= attributes[i].usage;
        }
        mask = result;
    }
    return mask;
}
