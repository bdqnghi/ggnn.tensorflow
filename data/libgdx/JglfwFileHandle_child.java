public FileHandle child(String name) {
    if (file.getPath().length() == 0)
        return new JglfwFileHandle(new File(name), type);
    return new JglfwFileHandle(new File(file, name), type);
}
