@Override
public boolean touchUp(int x, int y, int pointer, int button) {
    Gdx.app.log("Input Test", "touch up: " + x + ", " + y + ", button: " + getButtonString(button));
    return false;
}
