public static void main(String[] args) throws IOException {
    Map<String, String> params = parseArgs(args);
    if (!params.containsKey("dir") || !params.containsKey("name") || !params.containsKey("package") || !params.containsKey("mainClass") || ((!params.containsKey("sdkLocation") && System.getenv("ANDROID_HOME") == null))) {
        new GdxSetupUI();
        printHelp();
    } else {
        String sdkLocation = "";
        if (System.getenv("ANDROID_HOME") != null && !params.containsKey("sdkLocation")) {
            sdkLocation = System.getenv("ANDROID_HOME");
        } else {
            sdkLocation = params.get("sdkLocation");
        }
        DependencyBank bank = new DependencyBank();
        ProjectBuilder builder = new ProjectBuilder(bank);
        List<ProjectType> projects = new ArrayList<ProjectType>();
        projects.add(ProjectType.CORE);
        projects.add(ProjectType.DESKTOP);
        projects.add(ProjectType.ANDROID);
        projects.add(ProjectType.IOS);
        projects.add(ProjectType.HTML);
        List<Dependency> dependencies = new ArrayList<Dependency>();
        dependencies.add(bank.getDependency(ProjectDependency.GDX));
        builder.buildProject(projects, dependencies);
        builder.build();
        new GdxSetup().build(builder, params.get("dir"), params.get("name"), params.get("package"), params.get("mainClass"), sdkLocation, new CharCallback() {

            @Override
            public void character(char c) {
                System.out.print(c);
            }
        }, null);
    }
}
