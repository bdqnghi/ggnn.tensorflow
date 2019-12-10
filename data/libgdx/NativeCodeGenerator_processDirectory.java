private void processDirectory(FileDescriptor dir) throws Exception {
    FileDescriptor[] files = dir.list();
    for (FileDescriptor file : files) {
        if (file.isDirectory()) {
            if (file.path().contains(".svn"))
                continue;
            if (excludes != null && matcher.match(file.path(), excludes))
                continue;
            processDirectory(file);
        } else {
            if (file.extension().equals("java")) {
                if (file.name().contains("NativeCodeGenerator"))
                    continue;
                if (includes != null && !matcher.match(file.path(), includes))
                    continue;
                if (excludes != null && matcher.match(file.path(), excludes))
                    continue;
                String className = getFullyQualifiedClassName(file);
                FileDescriptor hFile = new FileDescriptor(jniDir.path() + "/" + className + ".h");
                FileDescriptor cppFile = new FileDescriptor(jniDir + "/" + className + ".cpp");
                if (file.lastModified() < cppFile.lastModified()) {
                    System.out.println("C/C++ for '" + file.path() + "' up to date");
                    continue;
                }
                String javaContent = file.readString();
                if (javaContent.contains(JNI_METHOD_MARKER)) {
                    ArrayList<JavaSegment> javaSegments = javaMethodParser.parse(javaContent);
                    if (javaSegments.size() == 0) {
                        System.out.println("Skipping '" + file + "', no JNI code found.");
                        continue;
                    }
                    System.out.print("Generating C/C++ for '" + file + "'...");
                    generateHFile(file);
                    generateCppFile(javaSegments, hFile, cppFile);
                    System.out.println("done");
                }
            }
        }
    }
}
