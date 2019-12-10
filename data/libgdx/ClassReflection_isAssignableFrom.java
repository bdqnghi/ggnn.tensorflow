/**
 * Determines if the class or interface represented by first Class parameter is either the same as, or is a superclass or
 * superinterface of, the class or interface represented by the second Class parameter.
 */
static public boolean isAssignableFrom(Class c1, Class c2) {
    return c1.isAssignableFrom(c2);
}
