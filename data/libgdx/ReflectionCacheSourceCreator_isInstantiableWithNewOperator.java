private static boolean isInstantiableWithNewOperator(JClassType t) {
    if (!t.isDefaultInstantiable() || t instanceof JArrayType || t instanceof JEnumType)
        return false;
    try {
        JConstructor constructor = t.getConstructor(new JType[0]);
        return constructor != null && constructor.isPublic();
    } catch (NotFoundException e) {
        return false;
    }
}
