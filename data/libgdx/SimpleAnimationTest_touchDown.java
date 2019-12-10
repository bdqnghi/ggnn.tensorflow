@Override
public boolean touchDown(int x, int y, int pointer, int button) {
    position.x = x;
    position.y = Gdx.graphics.getHeight() - y;
    return true;
}
