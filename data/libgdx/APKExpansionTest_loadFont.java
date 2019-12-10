private void loadFont(AssetManager assetManager, String fontName, int size) {
    FreeTypeFontLoaderParameter param = new FreeTypeFontLoaderParameter();
    param.fontFileName = fontName;
    param.fontParameters.size = 12;
    param.fontParameters.genMipMaps = true;
    param.fontParameters.minFilter = TextureFilter.MipMapLinearLinear;
    param.fontParameters.magFilter = TextureFilter.Linear;
    assetManager.load(fontName + "size" + size + ".ttf", BitmapFont.class, param);
}
