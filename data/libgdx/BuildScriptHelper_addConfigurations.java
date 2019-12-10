private static void addConfigurations(ProjectType project, BufferedWriter wr) throws IOException {
    if (project.equals(ProjectType.ANDROID)) {
        write(wr, "configurations { natives }");
    }
}
