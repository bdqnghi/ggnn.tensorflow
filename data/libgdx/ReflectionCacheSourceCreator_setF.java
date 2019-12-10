private void setF() {
    p("public void set(Field field, Object obj, Object value) throws IllegalAccessException {");
    SwitchedCodeBlock pc = new SwitchedCodeBlock("field.setter");
    for (SetterGetterStub stub : setterGetterStubs) {
        if (stub.enclosingType == null || stub.type == null || stub.isFinal || stub.unused)
            continue;
        pc.add(stub.setter, "s" + stub.setter + "(" + cast(stub.enclosingType, "obj") + ", " + cast(stub.type, "value") + "); return;");
    }
    pc.print();
    p("   throw new IllegalArgumentException(\"Missing setter-stub \" + field.setter + \" for field \" + field.name);");
    p("}");
}
