private void copyAndReplace(String outputDir, Project project, Map<String, String> values) {
    File out = new File(outputDir);
    if (!out.exists() && !out.mkdirs()) {
        throw new RuntimeException("Couldn't create output directory '" + out.getAbsolutePath() + "'");
    }
    for (ProjectFile file : project.files) {
        copyFile(file, out, values);
    }
}
