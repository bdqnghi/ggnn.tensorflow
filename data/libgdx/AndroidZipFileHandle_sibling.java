@Override
public FileHandle sibling(String name) {
    if (file.getPath().length() == 0)
        throw new GdxRuntimeException("Cannot get the sibling of the root.");
    // this way we can find the sibling even if it's not inside the obb
    return Gdx.files.getFileHandle(new File(file.getParent(), name).getPath(), type);
}
