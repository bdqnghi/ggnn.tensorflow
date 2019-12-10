public FileHandle sibling(String name) {
    if (file.getPath().length() == 0)
        throw new GdxRuntimeException("Cannot get the sibling of the root.");
    return new JglfwFileHandle(new File(file.getParent(), name), type);
}
