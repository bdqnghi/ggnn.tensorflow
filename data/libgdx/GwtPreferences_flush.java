@Override
public void flush() {
    try {
        // remove all old values
        for (int i = 0; i < GwtFiles.LocalStorage.getLength(); i++) {
            String key = GwtFiles.LocalStorage.key(i);
            if (key.startsWith(prefix))
                GwtFiles.LocalStorage.removeItem(key);
        }
        // push new values to LocalStorage
        for (String key : values.keys()) {
            String storageKey = toStorageKey(key, values.get(key));
            String storageValue = "" + values.get(key).toString();
            GwtFiles.LocalStorage.setItem(storageKey, storageValue);
        }
    } catch (Exception e) {
        throw new GdxRuntimeException("Couldn't flush preferences");
    }
}
