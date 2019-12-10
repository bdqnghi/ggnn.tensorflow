public List<String> buildProject(List<ProjectType> projects, List<Dependency> dependencies) {
    List<String> incompatibilities = new ArrayList<String>();
    for (Dependency dep : dependencies) {
        for (ProjectType type : projects) {
            dep.getDependencies(type);
            incompatibilities.addAll(dep.getIncompatibilities(type));
        }
    }
    this.modules = projects;
    this.dependencies = dependencies;
    return incompatibilities;
}
