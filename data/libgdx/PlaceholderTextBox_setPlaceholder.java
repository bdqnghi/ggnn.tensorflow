/**
 * Sets the placeholder text displayed in the text box.
 *
 * @param text the placeholder text
 */
public void setPlaceholder(String text) {
    placeholder = (text != null ? text : "");
    getElement().setPropertyString("placeholder", placeholder);
}
