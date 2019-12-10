private void invokeM() {
    p("public Object invoke(Method m, Object obj, Object[] params) {");
    SwitchedCodeBlock pc = new SwitchedCodeBlock("m.methodId");
    int subN = 0;
    int nDispatch = 0;
    for (MethodStub stub : methodStubs) {
        if (stub.enclosingType == null)
            continue;
        if (stub.enclosingType.contains("[]"))
            continue;
        if (stub.returnType == null)
            continue;
        if (stub.unused)
            continue;
        boolean paramsOk = true;
        for (String paramType : stub.parameterTypes) {
            if (paramType == null) {
                paramsOk = false;
                break;
            }
        }
        if (!paramsOk)
            continue;
        buffer.setLength(0);
        pbn("return m" + stub.methodId + "(");
        addParameters(stub);
        pbn(");");
        pc.add(stub.methodId, buffer.toString());
        nDispatch++;
        if (nDispatch > 1000) {
            pc.print();
            pc = new SwitchedCodeBlock("m.methodId");
            subN++;
            p("   return invoke" + subN + "(m, obj, params);");
            p("}");
            p("public Object invoke" + subN + "(Method m, Object obj, Object[] params) {");
            nDispatch = 0;
        }
    }
    pc.print();
    p("   throw new IllegalArgumentException(\"Missing method-stub \" + m.methodId + \" for method \" + m.name);");
    p("}");
}
