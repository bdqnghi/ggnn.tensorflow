private boolean containsDependency(List<Dependency> dependencyList, ProjectDependency projectDependency) {
    for (Dependency dep : dependencyList) {
        if (dep.getName().equals(projectDependency.name())) {
            return true;
        }
    }
    return false;
}
