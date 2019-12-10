private String createTypeGenerator(JType t) {
    buffer.setLength(0);
    int id = nextTypeId++;
    typeNames2typeIds.put(t.getErasedType().getQualifiedSourceName(), id);
    JClassType c = t.isClass();
    String name = t.getErasedType().getQualifiedSourceName();
    String superClass = null;
    if (c != null && (isVisible(c.getSuperclass())))
        superClass = c.getSuperclass().getErasedType().getQualifiedSourceName() + ".class";
    String assignables = null;
    String interfaces = null;
    if (c != null && c.getFlattenedSupertypeHierarchy() != null) {
        assignables = "new HashSet<Class>(Arrays.asList(";
        boolean used = false;
        for (JType i : c.getFlattenedSupertypeHierarchy()) {
            if (!isVisible(i) || i.equals(t) || "java.lang.Object".equals(i.getErasedType().getQualifiedSourceName()))
                continue;
            if (used)
                assignables += ", ";
            assignables += i.getErasedType().getQualifiedSourceName() + ".class";
            used = true;
        }
        if (used)
            assignables += "))";
        else
            assignables = null;
    }
    if (c == null) {
        // if it's not a class, it may be an interface instead
        c = t.isInterface();
    }
    if (c != null && c.getImplementedInterfaces() != null) {
        interfaces = "new HashSet<Class>(Arrays.asList(";
        boolean used = false;
        for (JType i : c.getImplementedInterfaces()) {
            if (!isVisible(i) || i.equals(t))
                continue;
            if (used)
                interfaces += ", ";
            interfaces += i.getErasedType().getQualifiedSourceName() + ".class";
            used = true;
        }
        if (used)
            interfaces += "))";
        else
            interfaces = null;
    }
    String varName = "c" + id;
    pb("private static Type " + varName + ";");
    pb("private static Type " + varName + "() {");
    pb("if(" + varName + "!=null) return " + varName + ";");
    pb(varName + " = new Type(\"" + name + "\", " + id + ", " + name + ".class, " + superClass + ", " + assignables + ", " + interfaces + ");");
    if (c != null) {
        if (c.isEnum() != null)
            pb(varName + ".isEnum = true;");
        if (c.isArray() != null)
            pb(varName + ".isArray = true;");
        if (c.isMemberType())
            pb(varName + ".isMemberClass = true;");
        if (c.isInterface() != null) {
            pb(varName + ".isInterface = true;");
        } else {
            pb(varName + ".isStatic = " + c.isStatic() + ";");
            pb(varName + ".isAbstract = " + c.isAbstract() + ";");
        }
        if (c.getFields() != null && c.getFields().length > 0) {
            pb(varName + ".fields = new Field[] {");
            for (JField f : c.getFields()) {
                String enclosingType = getType(c);
                String fieldType = getType(f.getType());
                int setterGetter = nextSetterGetterId++;
                String elementType = getElementTypes(f);
                String annotations = getAnnotations(f.getDeclaredAnnotations());
                pb("    new Field(\"" + f.getName() + "\", " + enclosingType + ", " + fieldType + ", " + f.isFinal() + ", " + f.isDefaultAccess() + ", " + f.isPrivate() + ", " + f.isProtected() + ", " + f.isPublic() + ", " + f.isStatic() + ", " + f.isTransient() + ", " + f.isVolatile() + ", " + setterGetter + ", " + setterGetter + ", " + elementType + ", " + annotations + "), ");
                SetterGetterStub stub = new SetterGetterStub();
                stub.name = f.getName();
                stub.enclosingType = enclosingType;
                stub.type = fieldType;
                stub.isStatic = f.isStatic();
                stub.isFinal = f.isFinal();
                if (enclosingType != null && fieldType != null) {
                    stub.getter = setterGetter;
                    stub.setter = setterGetter;
                }
                setterGetterStubs.add(stub);
            }
            pb("};");
        }
        createTypeInvokables(c, varName, "Method", c.getMethods());
        if (c.isPublic() && !c.isAbstract() && (c.getEnclosingType() == null || c.isStatic())) {
            createTypeInvokables(c, varName, "Constructor", c.getConstructors());
        } else {
            logger.log(Type.INFO, c.getName() + " can't be instantiated. Constructors not generated");
        }
        if (c.isArray() != null) {
            pb(varName + ".componentType = " + getType(c.isArray().getComponentType()) + ";");
        }
        if (c.isEnum() != null) {
            JEnumConstant[] enumConstants = c.isEnum().getEnumConstants();
            if (enumConstants != null) {
                pb(varName + ".enumConstants = new Object[" + enumConstants.length + "];");
                for (int i = 0; i < enumConstants.length; i++) {
                    pb(varName + ".enumConstants[" + i + "] = " + c.getErasedType().getQualifiedSourceName() + "." + enumConstants[i].getName() + ";");
                }
            }
        }
        Annotation[] annotations = c.getDeclaredAnnotations();
        if (annotations != null && annotations.length > 0) {
            pb(varName + ".annotations = " + getAnnotations(annotations) + ";");
        }
    } else if (t.isAnnotation() != null) {
        pb(varName + ".isAnnotation = true;");
    } else {
        pb(varName + ".isPrimitive = true;");
    }
    pb("return " + varName + ";");
    pb("}");
    return buffer.toString();
}
