@Override
public FreeTypeFontGenerator load(AssetManager assetManager, String fileName, FileHandle file, FreeTypeFontGeneratorParameters parameter) {
    FreeTypeFontGenerator generator = null;
    if (file.extension().equals("gen")) {
        generator = new FreeTypeFontGenerator(file.sibling(file.nameWithoutExtension()));
    } else {
        generator = new FreeTypeFontGenerator(file);
    }
    return generator;
}
