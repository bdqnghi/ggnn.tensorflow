/**
 * Sets the image data of the {@link Texture} based on the {@link Pixmap}. The texture must be bound for this to work. If
 * <code>disposePixmap</code> is true, the pixmap will be disposed at the end of the method.
 */
public static void generateMipMap(int target, Pixmap pixmap, int textureWidth, int textureHeight) {
    if (!useHWMipMap) {
        generateMipMapCPU(target, pixmap, textureWidth, textureHeight);
        return;
    }
    if (Gdx.app.getType() == ApplicationType.Android || Gdx.app.getType() == ApplicationType.WebGL || Gdx.app.getType() == ApplicationType.iOS) {
        generateMipMapGLES20(target, pixmap);
    } else {
        generateMipMapDesktop(target, pixmap, textureWidth, textureHeight);
    }
}
