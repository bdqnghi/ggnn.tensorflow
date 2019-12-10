/**
 * Execute the Ant script file with the given parameters.
 * @param buildFile
 * @param params
 * @return whether the Ant succeeded
 */
public static boolean executeAnt(String buildFile, String params) {
    FileDescriptor build = new FileDescriptor(buildFile);
    String ant = System.getProperty("os.name").contains("Windows") ? "ant.bat" : "ant";
    String command = ant + " -f \"" + build.file().getAbsolutePath() + "\" " + params;
    System.out.println("Executing '" + command + "'");
    return startProcess(command, build.parent().file());
}
