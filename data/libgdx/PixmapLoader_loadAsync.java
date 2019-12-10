@Override
public void loadAsync(AssetManager manager, String fileName, FileHandle file, PixmapParameter parameter) {
    pixmap = null;
    pixmap = new Pixmap(file);
}
