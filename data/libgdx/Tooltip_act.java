public void act(float delta) {
    super.act(delta);
    if (targetActor != null && targetActor.getStage() == null)
        remove();
}
