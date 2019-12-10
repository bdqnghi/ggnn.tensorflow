private void generateHFile(FileDescriptor file) throws Exception {
    String className = getFullyQualifiedClassName(file);
    String command = "javah -classpath " + classpath + " -o " + jniDir.path() + "/" + className + ".h " + className;
    Process process = Runtime.getRuntime().exec(command);
    process.waitFor();
    if (process.exitValue() != 0) {
        System.out.println();
        System.out.println("Command: " + command);
        InputStream errorStream = process.getErrorStream();
        int c = 0;
        while ((c = errorStream.read()) != -1) {
            System.out.print((char) c);
        }
    }
}
