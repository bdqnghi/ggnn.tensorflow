private void gatherSourceFiles(FileDescriptor file, String[] includes, String[] excludes, ArrayList<FileDescriptor> files) {
    String fileName = file.path().replace('\\', '/');
    if (file.isDirectory()) {
        if (match(fileName, excludes))
            return;
        for (FileDescriptor child : file.list()) {
            gatherSourceFiles(child, includes, excludes, files);
        }
    } else {
        if (match(fileName, includes) && !match(fileName, excludes))
            files.add(file);
    }
}
