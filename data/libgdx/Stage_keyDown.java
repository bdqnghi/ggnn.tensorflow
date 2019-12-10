/**
 * Applies a key down event to the actor that has {@link Stage#setKeyboardFocus(Actor) keyboard focus}, if any, and returns
 * true if the event was {@link Event#handle() handled}.
 */
public boolean keyDown(int keyCode) {
    Actor target = keyboardFocus == null ? root : keyboardFocus;
    InputEvent event = Pools.obtain(InputEvent.class);
    event.setStage(this);
    event.setType(InputEvent.Type.keyDown);
    event.setKeyCode(keyCode);
    target.fire(event);
    boolean handled = event.isHandled();
    Pools.free(event);
    return handled;
}
