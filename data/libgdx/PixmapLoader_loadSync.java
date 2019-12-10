@Override
public Pixmap loadSync(AssetManager manager, String fileName, FileHandle file, PixmapParameter parameter) {
    Pixmap pixmap = this.pixmap;
    this.pixmap = null;
    return pixmap;
}
