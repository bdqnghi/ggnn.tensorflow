private String generateMethodStub(MethodStub stub) {
    buffer.setLength(0);
    if (stub.enclosingType == null) {
        logger.log(Type.INFO, "method '" + stub.name + "' of invisible class is not invokable");
        return "";
    }
    if ((stub.enclosingType.startsWith("java") && !stub.enclosingType.startsWith("java.util")) || stub.enclosingType.contains("google")) {
        logger.log(Type.INFO, "not emitting code for accessing method " + stub.name + " in class '" + stub.enclosingType + ", either in java.* or GWT related class");
        return "";
    }
    if (stub.enclosingType.contains("[]")) {
        logger.log(Type.INFO, "method '" + stub.name + "' of class '" + stub.enclosingType + "' is not invokable because the class is an array type");
        return "";
    }
    for (int i = 0; i < stub.parameterTypes.size(); i++) {
        String paramType = stub.parameterTypes.get(i);
        if (paramType == null) {
            logger.log(Type.INFO, "method '" + stub.name + "' of class '" + stub.enclosingType + "' is not invokable because one of its argument types is not visible");
            return "";
        } else if (paramType.startsWith("long") || paramType.contains("java.lang.Long")) {
            logger.log(Type.INFO, "method '" + stub.name + "' of class '" + stub.enclosingType + " has long parameter, prohibited in JSNI");
            return "";
        } else {
            stub.parameterTypes.set(i, paramType.replace(".class", ""));
        }
    }
    if (stub.returnType == null) {
        logger.log(Type.INFO, "method '" + stub.name + "' of class '" + stub.enclosingType + "' is not invokable because its return type is not visible");
        return "";
    }
    if (stub.returnType.startsWith("long") || stub.returnType.contains("java.lang.Long")) {
        logger.log(Type.INFO, "method '" + stub.name + "' of class '" + stub.enclosingType + " has long return type, prohibited in JSNI");
        return "";
    }
    stub.enclosingType = stub.enclosingType.replace(".class", "");
    stub.returnType = stub.returnType.replace(".class", "");
    if (stub.isMethod) {
        boolean isVoid = stub.returnType.equals("void");
        pbn("private native " + (isVoid ? "Object" : stub.returnType) + " m" + stub.methodId + "(");
        if (!stub.isStatic)
            pbn(stub.enclosingType + " obj" + (stub.parameterTypes.size() > 0 ? ", " : ""));
        int i = 0;
        for (String paramType : stub.parameterTypes) {
            pbn(paramType + " p" + i + (i < stub.parameterTypes.size() - 1 ? "," : ""));
            i++;
        }
        pbn(") /*-{");
        if (!isVoid)
            pbn("return ");
        if (stub.isStatic)
            pbn("@" + stub.enclosingType + "::" + stub.name + "(" + stub.jnsi + ")(");
        else
            pbn("obj.@" + stub.enclosingType + "::" + stub.name + "(" + stub.jnsi + ")(");
        for (i = 0; i < stub.parameterTypes.size(); i++) {
            pbn("p" + i + (i < stub.parameterTypes.size() - 1 ? ", " : ""));
        }
        pbn(");");
        if (isVoid)
            pbn("return null;");
        pbn("}-*/;");
    } else {
        pbn("private static " + stub.returnType + " m" + stub.methodId + "(");
        int i = 0;
        for (String paramType : stub.parameterTypes) {
            pbn(paramType + " p" + i + (i < stub.parameterTypes.size() - 1 ? "," : ""));
            i++;
        }
        pbn(") {");
        pbn("return new " + stub.returnType + "(");
        for (i = 0; i < stub.parameterTypes.size(); i++) {
            pbn("p" + i + (i < stub.parameterTypes.size() - 1 ? ", " : ""));
        }
        pbn(")");
        if (!stub.isPublic) {
            // Access non-public constructors through an anonymous class
            pbn("{}");
        }
        pbn(";");
        pbn("}");
    }
    return buffer.toString();
}
