@Override
public void flush() {
    if (editor != null) {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.GINGERBREAD) {
            editor.apply();
        } else {
            editor.commit();
        }
        editor = null;
    }
}
