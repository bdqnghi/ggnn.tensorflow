public Dependency generateDependency() {
    Dependency dep = new Dependency(name, gwtInherits, getPlatformDependencies("core"), getPlatformDependencies("desktop"), getPlatformDependencies("android"), getPlatformDependencies("ios"), getPlatformDependencies("html"));
    return dep;
}
