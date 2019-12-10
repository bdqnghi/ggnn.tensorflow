static private void copyDirectory(FileDescriptor sourceDir, FileDescriptor destDir) {
    destDir.mkdirs();
    FileDescriptor[] files = sourceDir.list();
    for (int i = 0, n = files.length; i < n; i++) {
        FileDescriptor srcFile = files[i];
        FileDescriptor destFile = destDir.child(srcFile.name());
        if (srcFile.isDirectory())
            copyDirectory(srcFile, destFile);
        else
            copyFile(srcFile, destFile);
    }
}
