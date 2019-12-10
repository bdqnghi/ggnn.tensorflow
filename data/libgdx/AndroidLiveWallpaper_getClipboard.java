@Override
public Clipboard getClipboard() {
    if (clipboard == null) {
        clipboard = new AndroidClipboard(service);
    }
    return clipboard;
}
