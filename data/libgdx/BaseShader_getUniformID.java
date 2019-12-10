/**
 * @return the ID of the input or negative if not available.
 */
public int getUniformID(final String alias) {
    final int n = uniforms.size;
    for (int i = 0; i < n; i++) if (uniforms.get(i).equals(alias))
        return i;
    return -1;
}
