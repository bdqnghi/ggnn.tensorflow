/**
 * Adds all resources in the specified skin JSON file.
 */
public void load(FileHandle skinFile) {
    try {
        getJsonLoader(skinFile).fromJson(Skin.class, skinFile);
    } catch (SerializationException ex) {
        throw new SerializationException("Error reading file: " + skinFile, ex);
    }
}
