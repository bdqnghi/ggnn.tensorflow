/**
 * @param keyname the keyname returned by the {@link Keys#toString(int)} method
 * @return the int keycode
 */
public static int valueOf(String keyname) {
    if (keyNames == null)
        initializeKeyNames();
    return keyNames.get(keyname, -1);
}
