@Override
public FileHandle resolve(String fileName) {
    return baseResolver.resolve(prefix + fileName);
}
