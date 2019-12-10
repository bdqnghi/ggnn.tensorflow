private void getF() {
    p("public Object get(Field field, Object obj) throws IllegalAccessException {");
    SwitchedCodeBlock pc = new SwitchedCodeBlock("field.getter");
    for (SetterGetterStub stub : setterGetterStubs) {
        if (stub.enclosingType == null || stub.type == null || stub.unused)
            continue;
        pc.add(stub.getter, "return g" + stub.getter + "(" + cast(stub.enclosingType, "obj") + ");");
    }
    pc.print();
    p("   throw new IllegalArgumentException(\"Missing getter-stub \" + field.getter + \" for field \" + field.name);");
    p("}");
}
