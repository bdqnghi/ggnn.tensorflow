@Override
public boolean touchDown(int x, int y, int pointer, int button) {
    mode = TransformMode.Rotate;
    last.set(x, y);
    tCurr.set(x, y);
    return true;
}
