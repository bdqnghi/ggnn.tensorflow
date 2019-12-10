private String parseGradleArgs(List<ProjectType> modules, List<String> args) {
    String argString = "";
    if (args == null)
        return argString;
    for (String argument : args) {
        if (argument.equals("afterEclipseImport") && !modules.contains(ProjectType.DESKTOP))
            continue;
        argString += " " + argument;
    }
    return argString;
}
