private void generateCppFile(ArrayList<JavaSegment> javaSegments, FileDescriptor hFile, FileDescriptor cppFile) throws Exception {
    String headerFileContent = hFile.readString();
    ArrayList<CMethod> cMethods = cMethodParser.parse(headerFileContent).getMethods();
    StringBuffer buffer = new StringBuffer();
    emitHeaderInclude(buffer, hFile.name());
    for (JavaSegment segment : javaSegments) {
        if (segment instanceof JniSection) {
            emitJniSection(buffer, (JniSection) segment);
        }
        if (segment instanceof JavaMethod) {
            JavaMethod javaMethod = (JavaMethod) segment;
            if (javaMethod.getNativeCode() == null) {
                throw new RuntimeException("Method '" + javaMethod.getName() + "' has no body");
            }
            CMethod cMethod = findCMethod(javaMethod, cMethods);
            if (cMethod == null)
                throw new RuntimeException("Couldn't find C method for Java method '" + javaMethod.getClassName() + "#" + javaMethod.getName() + "'");
            emitJavaMethod(buffer, javaMethod, cMethod);
        }
    }
    cppFile.writeString(buffer.toString(), false, "UTF-8");
}
