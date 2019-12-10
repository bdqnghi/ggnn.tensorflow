public File file() {
    if (type == FileType.External)
        return new File(JglfwFiles.externalPath, file.getPath());
    if (type == FileType.Local)
        return new File(JglfwFiles.localPath, file.getPath());
    return file;
}
