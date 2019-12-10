@Override
public boolean tap(float x, float y, int count, int button) {
    return tests[testIndex].tap(x, y, count, button);
}
