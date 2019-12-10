/**
 * Returns true if the class or interface represented by the supplied Class is a static class.
 */
static public boolean isStaticClass(Class c) {
    return Modifier.isStatic(c.getModifiers());
}
