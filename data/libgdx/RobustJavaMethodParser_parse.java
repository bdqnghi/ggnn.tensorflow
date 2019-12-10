@Override
public ArrayList<JavaSegment> parse(String classFile) throws Exception {
    CompilationUnit unit = JavaParser.parse(new ByteArrayInputStream(classFile.getBytes()));
    ArrayList<JavaMethod> methods = new ArrayList<JavaMethod>();
    getJavaMethods(methods, getOuterClass(unit));
    ArrayList<JniSection> methodBodies = getNativeCodeBodies(classFile);
    ArrayList<JniSection> sections = getJniSections(classFile);
    alignMethodBodies(methods, methodBodies);
    ArrayList<JavaSegment> segments = sortMethodsAndSections(methods, sections);
    return segments;
}
