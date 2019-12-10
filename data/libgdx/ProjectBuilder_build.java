public boolean build() throws IOException {
    settingsFile = File.createTempFile("libgdx-setup-settings", ".gradle");
    buildFile = File.createTempFile("libgdx-setup-build", ".gradle");
    if (!settingsFile.exists()) {
        settingsFile.createNewFile();
    }
    if (!buildFile.exists()) {
        buildFile.createNewFile();
    }
    settingsFile.setWritable(true);
    buildFile.setWritable(true);
    try {
        FileWriter settingsWriter = new FileWriter(settingsFile.getAbsoluteFile());
        BufferedWriter settingsBw = new BufferedWriter(settingsWriter);
        String settingsContents = "include ";
        for (ProjectType module : modules) {
            settingsContents += "'" + module.getName() + "'";
            if (modules.indexOf(module) != modules.size() - 1) {
                settingsContents += ", ";
            }
        }
        settingsBw.write(settingsContents);
        settingsBw.close();
        settingsWriter.close();
        FileWriter buildWriter = new FileWriter(buildFile.getAbsoluteFile());
        BufferedWriter buildBw = new BufferedWriter(buildWriter);
        BuildScriptHelper.addBuildScript(modules, buildBw);
        BuildScriptHelper.addAllProjects(buildBw);
        for (ProjectType module : modules) {
            BuildScriptHelper.addProject(module, dependencies, buildBw);
        }
        // Add task here for now
        buildBw.write("\n");
        buildBw.write("tasks.eclipse.doLast {\n");
        buildBw.write("    delete \".project\"\n");
        buildBw.write("}");
        buildBw.close();
        buildWriter.close();
        return true;
    } catch (IOException e) {
        e.printStackTrace();
        return false;
    }
}
