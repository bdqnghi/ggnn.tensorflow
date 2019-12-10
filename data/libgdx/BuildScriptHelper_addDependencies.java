private static void addDependencies(ProjectType project, List<Dependency> dependencyList, BufferedWriter wr) throws IOException {
    write(wr, "dependencies {");
    if (!project.equals(ProjectType.CORE)) {
        write(wr, "compile project(\":" + ProjectType.CORE.getName() + "\")");
    }
    for (Dependency dep : dependencyList) {
        if (dep.getDependencies(project) == null)
            continue;
        for (String moduleDependency : dep.getDependencies(project)) {
            if (moduleDependency == null)
                continue;
            if (project.equals(ProjectType.ANDROID) && moduleDependency.contains("native")) {
                write(wr, "natives \"" + moduleDependency + "\"");
            } else {
                write(wr, "compile \"" + moduleDependency + "\"");
            }
        }
    }
    write(wr, "}");
}
