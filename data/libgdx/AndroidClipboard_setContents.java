@Override
public void setContents(final String contents) {
    try {
        ((Activity) context).runOnUiThread(new Runnable() {

            public void run() {
                if (android.os.Build.VERSION.SDK_INT < android.os.Build.VERSION_CODES.HONEYCOMB) {
                    android.text.ClipboardManager clipboard = (ClipboardManager) context.getSystemService(Context.CLIPBOARD_SERVICE);
                    clipboard.setText(contents);
                } else {
                    android.content.ClipboardManager clipboard = (android.content.ClipboardManager) context.getSystemService(Context.CLIPBOARD_SERVICE);
                    ClipData data = ClipData.newPlainText(contents, contents);
                    clipboard.setPrimaryClip(data);
                }
            }
        });
    } catch (final Exception ex) {
    }
}
