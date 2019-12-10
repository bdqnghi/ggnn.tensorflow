public static void addAllProjects(BufferedWriter wr) throws IOException {
    write(wr, "allprojects {");
    write(wr, "apply plugin: \"eclipse\"");
    write(wr, "apply plugin: \"idea\"");
    space(wr);
    write(wr, "version = '1.0'");
    write(wr, "ext {");
    write(wr, "appName = \"%APP_NAME%\"");
    write(wr, "gdxVersion = '" + DependencyBank.libgdxVersion + "'");
    write(wr, "roboVMVersion = '" + DependencyBank.roboVMVersion + "'");
    write(wr, "box2DLightsVersion = '" + DependencyBank.box2DLightsVersion + "'");
    write(wr, "ashleyVersion = '" + DependencyBank.ashleyVersion + "'");
    write(wr, "aiVersion = '" + DependencyBank.aiVersion + "'");
    write(wr, "}");
    space(wr);
    write(wr, "repositories {");
    write(wr, DependencyBank.mavenCentral);
    write(wr, "maven { url \"" + DependencyBank.libGDXSnapshotsUrl + "\" }");
    write(wr, "maven { url \"" + DependencyBank.libGDXReleaseUrl + "\" }");
    write(wr, "}");
    write(wr, "}");
}
