@Override
public BitmapFont loadSync(AssetManager manager, String fileName, FileHandle file, BitmapFontParameter parameter) {
    if (parameter != null && parameter.atlasName != null) {
        TextureAtlas atlas = manager.get(parameter.atlasName, TextureAtlas.class);
        String name = file.sibling(data.imagePaths[0]).nameWithoutExtension().toString();
        AtlasRegion region = atlas.findRegion(name);
        if (region == null)
            throw new GdxRuntimeException("Could not find font region " + name + " in atlas " + parameter.atlasName);
        return new BitmapFont(file, region);
    } else {
        int n = data.getImagePaths().length;
        Array<TextureRegion> regs = new Array(n);
        for (int i = 0; i < n; i++) {
            regs.add(new TextureRegion(manager.get(data.getImagePath(i), Texture.class)));
        }
        return new BitmapFont(data, regs, true);
    }
}
