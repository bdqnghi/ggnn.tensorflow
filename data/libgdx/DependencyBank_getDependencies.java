public String[] getDependencies(ProjectType type) {
    switch(type) {
        case CORE:
            return coreDependencies;
        case DESKTOP:
            return desktopDependencies;
        case ANDROID:
            return androidDependencies;
        case IOS:
            return iosDependencies;
        case HTML:
            return gwtDependencies;
    }
    return null;
}
