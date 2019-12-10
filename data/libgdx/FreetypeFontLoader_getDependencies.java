@Override
public Array<AssetDescriptor> getDependencies(String fileName, FileHandle file, FreeTypeFontLoaderParameter parameter) {
    Array<AssetDescriptor> deps = new Array<AssetDescriptor>();
    deps.add(new AssetDescriptor<FreeTypeFontGenerator>(parameter.fontFileName + ".gen", FreeTypeFontGenerator.class));
    return deps;
}
