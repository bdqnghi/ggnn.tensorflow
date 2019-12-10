@Override
public Model loadSync(AssetManager manager, String fileName, FileHandle file, P parameters) {
    ModelData data = null;
    synchronized (items) {
        for (int i = 0; i < items.size; i++) {
            if (items.get(i).key.equals(fileName)) {
                data = items.get(i).value;
                items.removeIndex(i);
            }
        }
    }
    if (data == null)
        return null;
    final Model result = new Model(data, new TextureProvider.AssetTextureProvider(manager));
    // need to remove the textures from the managed disposables, or else ref counting
    // doesn't work!
    Iterator<Disposable> disposables = result.getManagedDisposables().iterator();
    while (disposables.hasNext()) {
        Disposable disposable = disposables.next();
        if (disposable instanceof Texture) {
            disposables.remove();
        }
    }
    data = null;
    return result;
}
