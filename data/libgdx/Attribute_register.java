/**
 * Call this method to register a custom attribute type, see the wiki for an example. If the alias already exists, then that ID
 * will be reused. The alias should be unambiguously and will by default be returned by the call to {@link #toString()}.
 * @param alias The alias of the type to register, must be different for each dirrect type, will be used for debugging
 * @return the ID of the newly registered type, or the ID of the existing type if the alias was already registered
 */
protected final static long register(final String alias) {
    long result = getAttributeType(alias);
    if (result > 0)
        return result;
    types.add(alias);
    return 1L << (types.size - 1);
}
