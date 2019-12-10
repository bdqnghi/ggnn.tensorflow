/**
 * Hides the dialog. Called automatically when a button is clicked. The default implementation fades out the dialog over 400
 * milliseconds and then removes it from the stage.
 */
public void hide() {
    hide(sequence(fadeOut(0.4f, Interpolation.fade), Actions.removeListener(ignoreTouchDown, true), Actions.removeActor()));
}
