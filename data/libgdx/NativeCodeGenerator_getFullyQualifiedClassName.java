private String getFullyQualifiedClassName(FileDescriptor file) {
    String className = file.path().replace(sourceDir.path(), "").replace('\\', '.').replace('/', '.').replace(".java", "");
    if (className.startsWith("."))
        className = className.substring(1);
    return className;
}
