/**
 * @return the number of managed cubemaps currently loaded
 */
public static int getNumManagedCubemaps() {
    return managedCubemaps.get(Gdx.app).size;
}
