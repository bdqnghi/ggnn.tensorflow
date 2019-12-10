private void newArrayC() {
    p("public Object newArray (Type t, int size) {");
    p("    if (t != null) {");
    SwitchedCodeBlock pc = new SwitchedCodeBlock("t.id");
    for (JType type : types) {
        if (type.getQualifiedSourceName().equals("void"))
            continue;
        if (type.getQualifiedSourceName().endsWith("Void"))
            continue;
        String arrayType = type.getErasedType().getQualifiedSourceName() + "[size]";
        if (arrayType.contains("[]")) {
            arrayType = type.getErasedType().getQualifiedSourceName();
            arrayType = arrayType.replaceFirst("\\[\\]", "[size]") + "[]";
        }
        pc.add(typeNames2typeIds.get(type.getQualifiedSourceName()), "return new " + arrayType + ";");
    }
    pc.print();
    p("    }");
    p("    throw new RuntimeException(\"Couldn't create array\");");
    p("}");
}
