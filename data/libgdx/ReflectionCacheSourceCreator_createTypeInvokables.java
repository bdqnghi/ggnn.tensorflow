private void createTypeInvokables(JClassType c, String varName, String methodType, JAbstractMethod[] methodTypes) {
    if (methodTypes != null && methodTypes.length > 0) {
        pb(varName + "." + methodType.toLowerCase() + "s = new " + methodType + "[] {");
        for (JAbstractMethod m : methodTypes) {
            MethodStub stub = new MethodStub();
            stub.isPublic = m.isPublic();
            stub.enclosingType = getType(c);
            if (m.isMethod() != null) {
                stub.isMethod = true;
                stub.returnType = getType(m.isMethod().getReturnType());
                stub.isStatic = m.isMethod().isStatic();
                stub.isAbstract = m.isMethod().isAbstract();
                stub.isNative = m.isMethod().isAbstract();
                stub.isFinal = m.isMethod().isFinal();
            } else {
                if (m.isPrivate() || m.isDefaultAccess()) {
                    logger.log(Type.INFO, "Skipping non-visible constructor for class " + c.getName());
                    continue;
                }
                if (m.getEnclosingType().isFinal() && !m.isPublic()) {
                    logger.log(Type.INFO, "Skipping non-public constructor for final class" + c.getName());
                    continue;
                }
                stub.isConstructor = true;
                stub.returnType = stub.enclosingType;
            }
            stub.jnsi = "";
            stub.methodId = nextInvokableId++;
            stub.name = m.getName();
            methodStubs.add(stub);
            pbn("    new " + methodType + "(\"" + m.getName() + "\", ");
            pbn(stub.enclosingType + ", ");
            pbn(stub.returnType + ", ");
            if (m.getParameters() != null && m.getParameters().length > 0) {
                pbn("new Parameter[] {");
                for (JParameter p : m.getParameters()) {
                    stub.parameterTypes.add(getType(p.getType()));
                    stub.jnsi += p.getType().getErasedType().getJNISignature();
                    String paramName = (p.getName() + "__" + p.getType().getErasedType().getJNISignature()).replaceAll("[/;\\[\\]]", "_");
                    String paramInstantiation = "new Parameter(\"" + p.getName() + "\", " + getType(p.getType()) + ", \"" + p.getType().getJNISignature() + "\")";
                    parameterName2ParameterInstantiation.put(paramName, paramInstantiation);
                    pbn(paramName + "(), ");
                }
                pbn("}, ");
            } else {
                pbn("EMPTY_PARAMETERS,");
            }
            pb(stub.isAbstract + ", " + stub.isFinal + ", " + stub.isStatic + ", " + m.isDefaultAccess() + ", " + m.isPrivate() + ", " + m.isProtected() + ", " + m.isPublic() + ", " + stub.isNative + ", " + m.isVarArgs() + ", " + stub.isMethod + ", " + stub.isConstructor + ", " + stub.methodId + "," + getAnnotations(m.getDeclaredAnnotations()) + "),");
        }
        pb("};");
    }
}
