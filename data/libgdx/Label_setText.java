/**
 * @param newText May be null, "" will be used.
 */
public void setText(CharSequence newText) {
    if (newText == null)
        newText = "";
    if (newText instanceof StringBuilder) {
        if (text.equals(newText))
            return;
        text.setLength(0);
        text.append((StringBuilder) newText);
    } else {
        if (textEquals(newText))
            return;
        text.setLength(0);
        text.append(newText);
    }
    invalidateHierarchy();
}
