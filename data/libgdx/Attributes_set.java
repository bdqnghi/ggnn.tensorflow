/**
 * Add an array of attributes to this material. If the material already contains an attribute of the same type it is
 * overwritten.
 */
public final void set(final Iterable<Attribute> attributes) {
    for (final Attribute attr : attributes) set(attr);
}
