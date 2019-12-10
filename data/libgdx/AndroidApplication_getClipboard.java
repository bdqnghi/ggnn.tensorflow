@Override
public Clipboard getClipboard() {
    if (clipboard == null) {
        clipboard = new AndroidClipboard(this);
    }
    return clipboard;
}
