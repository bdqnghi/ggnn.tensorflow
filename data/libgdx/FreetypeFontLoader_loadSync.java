@Override
public BitmapFont loadSync(AssetManager manager, String fileName, FileHandle file, FreeTypeFontLoaderParameter parameter) {
    if (parameter == null)
        throw new RuntimeException("FreetypeFontParameter must be set in AssetManager#load to point at a TTF file!");
    FreeTypeFontGenerator generator = manager.get(parameter.fontFileName + ".gen", FreeTypeFontGenerator.class);
    BitmapFont font = generator.generateFont(parameter.fontParameters);
    return font;
}
