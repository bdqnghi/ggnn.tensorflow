@Override
public Clipboard getClipboard() {
    if (clipboard == null) {
        clipboard = new AndroidClipboard(getActivity());
    }
    return clipboard;
}
