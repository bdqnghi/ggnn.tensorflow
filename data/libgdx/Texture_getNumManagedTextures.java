/**
 * @return the number of managed textures currently loaded
 */
public static int getNumManagedTextures() {
    return managedTextures.get(Gdx.app).size;
}
