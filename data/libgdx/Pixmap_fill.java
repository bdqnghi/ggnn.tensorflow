/**
 * Fills the complete bitmap with the currently set color.
 */
public void fill() {
    context.clearRect(0, 0, getWidth(), getHeight());
    rectangle(0, 0, getWidth(), getHeight(), DrawType.FILL);
}
