@Override
public void setCursor(com.badlogic.gdx.graphics.Cursor cursor) {
    if (cursor == null) {
        LwjglCursor.resetCursor();
    } else {
        cursor.setSystemCursor();
    }
}
