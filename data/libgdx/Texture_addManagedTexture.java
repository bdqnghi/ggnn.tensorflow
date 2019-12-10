private static void addManagedTexture(Application app, Texture texture) {
    Array<Texture> managedTextureArray = managedTextures.get(app);
    if (managedTextureArray == null)
        managedTextureArray = new Array<Texture>();
    managedTextureArray.add(texture);
    managedTextures.put(app, managedTextureArray);
}
