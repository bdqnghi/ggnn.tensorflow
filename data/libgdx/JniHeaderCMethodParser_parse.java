public CMethodParserResult parse(String headerFile) {
    ArrayList<CMethod> methods = new ArrayList<CMethod>();
    int index = headerFile.indexOf(C_METHOD_MARKER);
    if (index == -1)
        return null;
    while (index >= 0) {
        CMethod method = parseCMethod(headerFile, index);
        if (method == null)
            throw new RuntimeException("Couldn't parse method");
        methods.add(method);
        index = headerFile.indexOf(C_METHOD_MARKER, method.endIndex);
    }
    return new CMethodParserResult(methods);
}
