/**
 * s * @return an array containing all public methods of this class and its super classes. See {@link Class#getMethods()}.
 */
public Method[] getMethods() {
    if (allMethods == null) {
        ArrayList<Method> allMethodsList = new ArrayList<Method>();
        Type t = this;
        while (t != null) {
            for (Method m : t.methods) {
                if (m.isPublic())
                    allMethodsList.add(m);
            }
            t = t.getSuperclass();
        }
        allMethods = allMethodsList.toArray(new Method[allMethodsList.size()]);
    }
    return allMethods;
}
