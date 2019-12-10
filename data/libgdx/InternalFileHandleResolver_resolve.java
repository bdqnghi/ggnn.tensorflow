@Override
public FileHandle resolve(String fileName) {
    return Gdx.files.internal(fileName);
}
