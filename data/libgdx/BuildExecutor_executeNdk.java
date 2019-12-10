/**
 * Execute ndk-build in the given directory
 * @param directory
 */
public static void executeNdk(String directory) {
    FileDescriptor build = new FileDescriptor(directory);
    String command = "ndk-build";
    startProcess(command, build.file());
}
