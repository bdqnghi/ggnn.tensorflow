@Override
public void loadAsync(AssetManager manager, String fileName, FileHandle file, FreeTypeFontLoaderParameter parameter) {
    if (parameter == null)
        throw new RuntimeException("FreetypeFontParameter must be set in AssetManager#load to point at a TTF file!");
}
