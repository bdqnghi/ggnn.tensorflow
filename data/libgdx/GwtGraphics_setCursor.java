@Override
public void setCursor(Cursor cursor) {
    if (cursor == null) {
        GwtCursor.resetCursor();
    } else {
        cursor.setSystemCursor();
    }
}
