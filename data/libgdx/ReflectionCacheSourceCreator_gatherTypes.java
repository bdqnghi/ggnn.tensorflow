private void gatherTypes(JType type, List<JType> types) {
    nesting++;
    // came here from a type that has no super class
    if (type == null) {
        nesting--;
        return;
    }
    // package info
    if (type.getQualifiedSourceName().contains("-")) {
        nesting--;
        return;
    }
    // not visible
    if (!isVisible(type)) {
        nesting--;
        return;
    }
    // filter reflection scope based on configuration in gwt xml module
    boolean keep = false;
    String name = type.getQualifiedSourceName();
    try {
        ConfigurationProperty prop;
        keep |= !name.contains(".");
        prop = context.getPropertyOracle().getConfigurationProperty("gdx.reflect.include");
        for (String s : prop.getValues()) keep |= name.contains(s);
        prop = context.getPropertyOracle().getConfigurationProperty("gdx.reflect.exclude");
        for (String s : prop.getValues()) keep &= !name.equals(s);
    } catch (BadPropertyValueException e) {
        // TODO Auto-generated catch block
        e.printStackTrace();
    }
    if (!keep) {
        nesting--;
        return;
    }
    // already visited this type
    if (types.contains(type.getErasedType())) {
        nesting--;
        return;
    }
    types.add(type.getErasedType());
    out(type.getErasedType().getQualifiedSourceName(), nesting);
    if (type instanceof JPrimitiveType) {
        // nothing to do for a primitive type
        nesting--;
        return;
    } else {
        // gather fields
        JClassType c = (JClassType) type;
        JField[] fields = c.getFields();
        if (fields != null) {
            for (JField field : fields) {
                gatherTypes(field.getType().getErasedType(), types);
            }
        }
        // gather super types & interfaces
        gatherTypes(c.getSuperclass(), types);
        JClassType[] interfaces = c.getImplementedInterfaces();
        if (interfaces != null) {
            for (JClassType i : interfaces) {
                gatherTypes(i.getErasedType(), types);
            }
        }
        // gather method parameter & return types
        JMethod[] methods = c.getMethods();
        if (methods != null) {
            for (JMethod m : methods) {
                gatherTypes(m.getReturnType().getErasedType(), types);
                if (m.getParameterTypes() != null) {
                    for (JType p : m.getParameterTypes()) {
                        gatherTypes(p.getErasedType(), types);
                    }
                }
            }
        }
        // gather inner classes
        JClassType[] inner = c.getNestedTypes();
        if (inner != null) {
            for (JClassType i : inner) {
                gatherTypes(i.getErasedType(), types);
            }
        }
    }
    nesting--;
}
