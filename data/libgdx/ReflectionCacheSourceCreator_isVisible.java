private boolean isVisible(JType type) {
    if (type == null)
        return false;
    if (type instanceof JClassType) {
        if (type instanceof JArrayType) {
            JType componentType = ((JArrayType) type).getComponentType();
            while (componentType instanceof JArrayType) {
                componentType = ((JArrayType) componentType).getComponentType();
            }
            if (componentType instanceof JClassType) {
                return ((JClassType) componentType).isPublic();
            }
        } else {
            return ((JClassType) type).isPublic();
        }
    }
    return true;
}
