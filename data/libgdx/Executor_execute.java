/**
 * Execute the Ant script file with the given parameters.
 * @return whether the Ant succeeded
 */
public static boolean execute(File workingDir, String windowsFile, String unixFile, String parameters, CharCallback callback) {
    String exec = workingDir.getAbsolutePath() + "/" + (System.getProperty("os.name").contains("Windows") ? windowsFile : unixFile);
    String log = "Executing '" + exec + " " + parameters + "'";
    for (int i = 0; i < log.length(); i++) {
        callback.character(log.charAt(i));
    }
    callback.character('\n');
    String[] params = parameters.split(" ");
    String[] commands = new String[params.length + 1];
    commands[0] = exec;
    for (int i = 0; i < params.length; i++) {
        commands[i + 1] = params[i];
    }
    return startProcess(commands, workingDir, callback);
}
