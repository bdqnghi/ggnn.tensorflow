public static void addProject(ProjectType project, List<Dependency> dependencies, BufferedWriter wr) throws IOException {
    space(wr);
    write(wr, "project(\":" + project.getName() + "\") {");
    for (String plugin : project.getPlugins()) {
        write(wr, "apply plugin: \"" + plugin + "\"");
    }
    space(wr);
    addConfigurations(project, wr);
    space(wr);
    addDependencies(project, dependencies, wr);
    write(wr, "}");
}
