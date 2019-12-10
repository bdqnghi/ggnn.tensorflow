@Override
public I18NBundle loadSync(AssetManager manager, String fileName, FileHandle file, I18NBundleParameter parameter) {
    I18NBundle bundle = this.bundle;
    this.bundle = null;
    return bundle;
}
