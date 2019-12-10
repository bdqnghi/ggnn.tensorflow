@Override
public void update() {
    float delta = Gdx.graphics.getRawDeltaTime();
    time += delta;
    super.update();
    if (contactCache != null)
        contactCache.update(delta);
}
