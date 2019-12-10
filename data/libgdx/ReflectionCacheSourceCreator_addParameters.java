private void addParameters(MethodStub stub) {
    if (!stub.isStatic && !stub.isConstructor)
        pbn("(" + stub.enclosingType + ")obj" + (stub.parameterTypes.size() > 0 ? "," : ""));
    for (int i = 0; i < stub.parameterTypes.size(); i++) {
        pbn(cast(stub.parameterTypes.get(i), "params[" + i + "]") + (i < stub.parameterTypes.size() - 1 ? ", " : ""));
    }
}
