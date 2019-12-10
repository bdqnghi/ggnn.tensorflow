@Override
public boolean touchDown(float x, float y, int pointer, int button) {
    return tests[testIndex].touchDown(x, y, pointer, button);
}
