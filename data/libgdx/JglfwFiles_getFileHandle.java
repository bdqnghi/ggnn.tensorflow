public FileHandle getFileHandle(String fileName, FileType type) {
    return new JglfwFileHandle(fileName, type);
}
