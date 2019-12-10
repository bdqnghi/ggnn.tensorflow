public FileHandle sibling(String name) {
    name = name.replace('\\', '/');
    if (file.getPath().length() == 0)
        throw new GdxRuntimeException("Cannot get the sibling of the root.");
    // this way we can find the sibling even if it's inside the obb
    return Gdx.files.getFileHandle(new File(file.getParent(), name).getPath(), type);
}
