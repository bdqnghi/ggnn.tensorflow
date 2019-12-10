private String getElementTypes(JField f) {
    StringBuilder b = new StringBuilder();
    JParameterizedType params = f.getType().isParameterized();
    if (params != null) {
        JClassType[] typeArgs = params.getTypeArgs();
        b.append("new Class[] {");
        for (JClassType typeArg : typeArgs) {
            if (typeArg.isWildcard() != null)
                b.append("null");
            else if (!isVisible(typeArg))
                b.append("null");
            else if (typeArg.isClassOrInterface() != null)
                b.append(typeArg.isClassOrInterface().getQualifiedSourceName()).append(".class");
            else if (typeArg.isParameterized() != null)
                b.append(typeArg.isParameterized().getQualifiedBinaryName()).append(".class");
            else
                b.append("null");
            b.append(", ");
        }
        b.append("}");
        return b.toString();
    }
    return "null";
}
