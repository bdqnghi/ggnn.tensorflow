/**
 * @return The alias of the specified attribute type, or null if not available.
 */
public final static String getAttributeAlias(final long type) {
    int idx = -1;
    while (type != 0 && ++idx < 63 && (((type >> idx) & 1) == 0)) ;
    return (idx >= 0 && idx < types.size) ? types.get(idx) : null;
}
