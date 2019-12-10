@Override
public boolean touchUp(int x, int y, int pointer, int button) {
    renderMethod = (renderMethod + 1) % 2;
    return false;
}
