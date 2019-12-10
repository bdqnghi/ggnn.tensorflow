@Override
public boolean touchUp(int x, int y, int pointer, int button) {
    tests[testIndex].touchUp(x, y, pointer, button);
    return false;
}
