/**
 * @param fileName file name to resolve
 * @return handle to the file, as resolved by the {@link FileHandleResolver} set on the loader
 */
public FileHandle resolve(String fileName) {
    return resolver.resolve(fileName);
}
