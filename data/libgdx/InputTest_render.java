@Override
public void render() {
    if (Gdx.input.justTouched()) {
        Gdx.app.log("Input Test", "just touched, button: " + (Gdx.input.isButtonPressed(Buttons.LEFT) ? "left " : "") + (Gdx.input.isButtonPressed(Buttons.MIDDLE) ? "middle " : "") + (Gdx.input.isButtonPressed(Buttons.RIGHT) ? "right" : "") + (Gdx.input.isButtonPressed(Buttons.BACK) ? "back" : "") + (Gdx.input.isButtonPressed(Buttons.FORWARD) ? "forward" : ""));
    }
    for (int i = 0; i < 10; i++) {
        if (Gdx.input.getDeltaX(i) != 0 || Gdx.input.getDeltaY(i) != 0) {
            Gdx.app.log("Input Test", "delta[" + i + "]: " + Gdx.input.getDeltaX(i) + ", " + Gdx.input.getDeltaY(i));
        }
    }
// Gdx.input.setCursorPosition(Gdx.graphics.getWidth() / 2, Gdx.graphics.getHeight() / 2);
// if(Gdx.input.isTouched()) {
// Gdx.app.log("Input Test", "is touched");
// }
}
