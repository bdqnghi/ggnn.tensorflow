private void copyFile(ProjectFile file, File out, Map<String, String> values) {
    File outFile = new File(out, file.outputName);
    if (!outFile.getParentFile().exists() && !outFile.getParentFile().mkdirs()) {
        throw new RuntimeException("Couldn't create dir '" + outFile.getAbsolutePath() + "'");
    }
    boolean isTemp = file instanceof TemporaryProjectFile ? true : false;
    if (file.isTemplate) {
        String txt;
        if (isTemp) {
            txt = readResourceAsString(((TemporaryProjectFile) file).file);
        } else {
            txt = readResourceAsString(file.resourceName, file.resourceLoc);
        }
        txt = replace(txt, values);
        writeFile(outFile, txt);
    } else {
        if (isTemp) {
            writeFile(outFile, readResource(((TemporaryProjectFile) file).file));
        } else {
            writeFile(outFile, readResource(file.resourceName, file.resourceLoc));
        }
    }
}
