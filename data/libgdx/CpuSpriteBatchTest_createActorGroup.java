private Group createActorGroup(TextureRegionDrawable bob) {
    Actor main = new DrawableActor(bob);
    main.setPosition(0, 0, Align.center);
    Actor hat = new DrawableActor(bob) {

        @Override
        public void act(float delta) {
            rotateBy(delta * -300);
        }
    };
    hat.setOrigin(Align.center);
    hat.setScale(0.5f);
    hat.setPosition(0, 21, Align.center);
    Group group = new Group() {

        @Override
        public void act(float delta) {
            rotateBy(delta * 120);
            setScale(0.9f + 0.2f * MathUtils.cos(MathUtils.degreesToRadians * getRotation()));
            super.act(delta);
        }
    };
    group.addActor(main);
    group.addActor(hat);
    // group.setTransform(false);
    float margin = 35;
    float x = MathUtils.random(margin, stage.getWidth() - margin);
    float y = MathUtils.random(margin, stage.getHeight() - margin);
    group.setPosition(x, y);
    group.setRotation(MathUtils.random(0, 360));
    return group;
}
