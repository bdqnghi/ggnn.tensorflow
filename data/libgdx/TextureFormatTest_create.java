@Override
public void create() {
    FileHandle file = Gdx.files.internal("data/bobargb8888-32x32.png");
    nonMipMapped[0] = new Texture(file, Format.Alpha, false);
    nonMipMapped[1] = new Texture(file, Format.LuminanceAlpha, false);
    nonMipMapped[2] = new Texture(file, Format.RGB888, false);
    nonMipMapped[3] = new Texture(file, Format.RGB565, false);
    nonMipMapped[4] = new Texture(file, Format.RGBA8888, false);
    nonMipMapped[5] = new Texture(file, Format.RGBA4444, false);
    mipMapped[0] = new Texture(file, Format.Alpha, true);
    mipMapped[1] = new Texture(file, Format.LuminanceAlpha, true);
    mipMapped[2] = new Texture(file, Format.RGB888, true);
    mipMapped[3] = new Texture(file, Format.RGB565, true);
    mipMapped[4] = new Texture(file, Format.RGBA8888, true);
    mipMapped[5] = new Texture(file, Format.RGBA4444, true);
    batch = new SpriteBatch();
}
