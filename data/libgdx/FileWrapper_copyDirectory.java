static private void copyDirectory(FileWrapper sourceDir, FileWrapper destDir) {
    destDir.mkdirs();
    FileWrapper[] files = sourceDir.list();
    for (int i = 0, n = files.length; i < n; i++) {
        FileWrapper srcFile = files[i];
        FileWrapper destFile = destDir.child(srcFile.name());
        if (srcFile.isDirectory())
            copyDirectory(srcFile, destFile);
        else
            copyFile(srcFile, destFile);
    }
}
