private String getType(JType type) {
    if (!isVisible(type))
        return null;
    return type.getErasedType().getQualifiedSourceName() + ".class";
}
