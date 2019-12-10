/**
 * Used for sorting attributes by type (not by value)
 */
@Override
public final int compare(final Attribute arg0, final Attribute arg1) {
    return (int) (arg0.type - arg1.type);
}
