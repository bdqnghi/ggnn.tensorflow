/**
 * Generates .h/.cpp fiels from the Java files found in <code>sourceDir</code>, with their .class files being in
 * <code>classpath</code>. The generated files will be stored in <code>jniDir</code>. The <code>includes</code> and
 * <code>excludes</code> parameters allow to specify directories and files that should be included/excluded from the
 * generation. These can be given in the Ant path format. All paths are relative to the applications working directory.
 * @param sourceDir the directory containing the Java files
 * @param classpath the directory containing the .class files
 * @param jniDir the output directory
 * @param includes files/directories to include, can be null (all files are used)
 * @param excludes files/directories to exclude, can be null (no files are excluded)
 * @throws Exception
 */
public void generate(String sourceDir, String classpath, String jniDir, String[] includes, String[] excludes) throws Exception {
    this.sourceDir = new FileDescriptor(sourceDir);
    this.jniDir = new FileDescriptor(jniDir);
    this.classpath = classpath;
    this.includes = includes;
    this.excludes = excludes;
    // check if source directory exists
    if (!this.sourceDir.exists()) {
        throw new Exception("Java source directory '" + sourceDir + "' does not exist");
    }
    // generate jni directory if necessary
    if (!this.jniDir.exists()) {
        if (!this.jniDir.mkdirs()) {
            throw new Exception("Couldn't create JNI directory '" + jniDir + "'");
        }
    }
    // process the source directory, emitting c/c++ files to jniDir
    processDirectory(this.sourceDir);
}
