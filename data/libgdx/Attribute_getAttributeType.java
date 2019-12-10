/**
 * @return The ID of the specified attribute type, or zero if not available
 */
public final static long getAttributeType(final String alias) {
    for (int i = 0; i < types.size; i++) if (types.get(i).compareTo(alias) == 0)
        return 1L << i;
    return 0;
}
