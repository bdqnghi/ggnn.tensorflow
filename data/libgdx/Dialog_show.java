/**
 * {@link #pack() Packs} the dialog and adds it to the stage, centered with default fadeIn action
 */
public Dialog show(Stage stage) {
    show(stage, sequence(Actions.alpha(0), Actions.fadeIn(0.4f, Interpolation.fade)));
    setPosition(Math.round((stage.getWidth() - getWidth()) / 2), Math.round((stage.getHeight() - getHeight()) / 2));
    return this;
}
