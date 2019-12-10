public FileHandle external(String path) {
    return new JglfwFileHandle(path, FileType.External);
}
