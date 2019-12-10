@Override
public void act(float delta) {
    super.act(delta);
    if (animateTime > 0) {
        animateTime -= delta;
        Stage stage = getStage();
        if (stage != null && stage.getActionsRequestRendering())
            Gdx.graphics.requestRendering();
    }
}
