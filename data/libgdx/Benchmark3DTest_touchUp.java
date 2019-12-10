@Override
public boolean touchUp(int screenX, int screenY, int pointer, int button) {
    onModelClicked(models[MathUtils.random(models.length - 1)]);
    return false;
}
