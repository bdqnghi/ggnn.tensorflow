@Override
public void resize(int width, int height) {
    stage1.getViewport().update(width, height, true);
    stage2.getViewport().update(width, height, true);
}
