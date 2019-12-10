/**
 * @param str If null, "" is used.
 */
public void appendText(String str) {
    if (str == null)
        str = "";
    clearSelection();
    cursor = text.length();
    paste(str, programmaticChangeEvents);
}
