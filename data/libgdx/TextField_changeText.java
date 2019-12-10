/**
 * @param oldText May be null.
 * @return True if the text was changed.
 */
boolean changeText(String oldText, String newText) {
    if (newText.equals(oldText))
        return false;
    text = newText;
    ChangeEvent changeEvent = Pools.obtain(ChangeEvent.class);
    boolean cancelled = fire(changeEvent);
    text = cancelled ? oldText : newText;
    Pools.free(changeEvent);
    return !cancelled;
}
