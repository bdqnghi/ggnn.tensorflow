/**
 * Adds the given button to the button table.
 * @param object The object that will be passed to {@link #result(Object)} if this button is clicked. May be null.
 */
public Dialog button(Button button, Object object) {
    buttonTable.add(button);
    setObject(button, object);
    return this;
}
