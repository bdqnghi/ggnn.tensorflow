private String generateSetterGetterStub(SetterGetterStub stub) {
    buffer.setLength(0);
    if (stub.enclosingType == null || stub.type == null) {
        logger.log(Type.INFO, "field '" + stub.name + "' in class '" + stub.enclosingType + "' is not accessible as its type '" + stub.type + "' is not public");
        return "";
    }
    if (stub.enclosingType.startsWith("java") || stub.enclosingType.contains("google")) {
        logger.log(Type.INFO, "not emitting code for accessing field " + stub.name + " in class '" + stub.enclosingType + ", either in java.* or GWT related class");
        return "";
    }
    if (stub.type.startsWith("long") || stub.type.contains("java.lang.Long")) {
        logger.log(Type.INFO, "not emitting code for accessing field " + stub.name + " in class '" + stub.enclosingType + " as its of type long which can't be used with JSNI");
        return "";
    }
    stub.enclosingType = stub.enclosingType.replace(".class", "");
    stub.type = stub.type.replace(".class", "");
    pbn("private native " + stub.type + " g" + stub.getter + "(" + stub.enclosingType + " obj) /*-{");
    if (stub.isStatic)
        pbn("return @" + stub.enclosingType + "::" + stub.name + ";");
    else
        pbn("return obj.@" + stub.enclosingType + "::" + stub.name + ";");
    pb("}-*/;");
    if (!stub.isFinal) {
        pbn("private native void s" + stub.setter + "(" + stub.enclosingType + " obj, " + stub.type + " value)  /*-{");
        if (stub.isStatic)
            pbn("@" + stub.enclosingType + "::" + stub.name + " = value");
        else
            pbn("obj.@" + stub.enclosingType + "::" + stub.name + " = value;");
        pb("}-*/;");
    }
    return buffer.toString();
}
