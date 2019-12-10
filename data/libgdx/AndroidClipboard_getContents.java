@Override
public String getContents() {
    if (android.os.Build.VERSION.SDK_INT < android.os.Build.VERSION_CODES.HONEYCOMB) {
        android.text.ClipboardManager clipboard = (ClipboardManager) context.getSystemService(Context.CLIPBOARD_SERVICE);
        if (clipboard.getText() == null)
            return null;
        return clipboard.getText().toString();
    } else {
        android.content.ClipboardManager clipboard = (android.content.ClipboardManager) context.getSystemService(Context.CLIPBOARD_SERVICE);
        ClipData clip = clipboard.getPrimaryClip();
        if (clip == null)
            return null;
        CharSequence text = clip.getItemAt(0).getText();
        if (text == null)
            return null;
        return text.toString();
    }
}
