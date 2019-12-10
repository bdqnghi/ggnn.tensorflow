public static void addBuildScript(List<ProjectType> projects, BufferedWriter wr) throws IOException {
    write(wr, "buildscript {");
    // repos
    write(wr, "repositories {");
    write(wr, DependencyBank.mavenCentral);
    write(wr, "maven { url \"" + DependencyBank.libGDXSnapshotsUrl + "\" }");
    if (projects.contains(ProjectType.HTML)) {
        write(wr, DependencyBank.jCenter);
    }
    write(wr, "}");
    // dependencies
    write(wr, "dependencies {");
    if (projects.contains(ProjectType.HTML)) {
        write(wr, "classpath '" + DependencyBank.gwtPluginImport + "'");
    }
    if (projects.contains(ProjectType.ANDROID)) {
        write(wr, "classpath '" + DependencyBank.androidPluginImport + "'");
    }
    if (projects.contains(ProjectType.IOS)) {
        write(wr, "classpath '" + DependencyBank.roboVMPluginImport + "'");
    }
    write(wr, "}");
    write(wr, "}");
    space(wr);
}
