@Override
public boolean touchDown(int x, int y, int pointer, int button) {
    Gdx.app.log("Input Test", "touch down: " + x + ", " + y + ", button: " + getButtonString(button));
    return false;
}
