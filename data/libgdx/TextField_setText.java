/**
 * @param str If null, "" is used.
 */
public void setText(String str) {
    if (str == null)
        str = "";
    if (str.equals(text))
        return;
    clearSelection();
    String oldText = text;
    text = "";
    paste(str, false);
    if (programmaticChangeEvents)
        changeText(oldText, text);
    cursor = 0;
}
