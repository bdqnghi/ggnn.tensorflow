/**
 * If this key is pressed, {@link #result(Object)} is called with the specified object.
 * @see Keys
 */
public Dialog key(final int keycode, final Object object) {
    addListener(new InputListener() {

        public boolean keyDown(InputEvent event, int keycode2) {
            if (keycode == keycode2) {
                result(object);
                if (!cancelHide)
                    hide();
                cancelHide = false;
            }
            return false;
        }
    });
    return this;
}
