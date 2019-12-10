@Override
public void create() {
    texture = new Texture(Gdx.files.internal("data/badlogicsmall.jpg"));
    texture.setFilter(TextureFilter.Linear, TextureFilter.Linear);
    font = new BitmapFont(Gdx.files.internal("data/arial-15.fnt"), false);
    stage = new Stage(new ScreenViewport());
    float loc = (NUM_SPRITES * (32 + SPACING) - SPACING) / 2;
    for (int i = 0; i < NUM_GROUPS; i++) {
        Group group = new Group();
        group.setX((float) Math.random() * (stage.getWidth() - NUM_SPRITES * (32 + SPACING)));
        group.setY((float) Math.random() * (stage.getHeight() - NUM_SPRITES * (32 + SPACING)));
        group.setOrigin(loc, loc);
        fillGroup(group, texture);
        stage.addActor(group);
    }
    uiTexture = new Texture(Gdx.files.internal("data/ui.png"));
    uiTexture.setFilter(TextureFilter.Linear, TextureFilter.Linear);
    ui = new Stage(new ScreenViewport());
    Image blend = new Image(new TextureRegion(uiTexture, 0, 0, 64, 32));
    blend.setAlign(Align.center);
    blend.setScaling(Scaling.none);
    blend.addListener(new InputListener() {

        public boolean touchDown(InputEvent event, float x, float y, int pointer, int button) {
            if (stage.getBatch().isBlendingEnabled())
                stage.getBatch().disableBlending();
            else
                stage.getBatch().enableBlending();
            return true;
        }
    });
    blend.setY(ui.getHeight() - 64);
    Image rotate = new Image(new TextureRegion(uiTexture, 64, 0, 64, 32));
    rotate.setAlign(Align.center);
    rotate.setScaling(Scaling.none);
    rotate.addListener(new InputListener() {

        public boolean touchDown(InputEvent event, float x, float y, int pointer, int button) {
            rotateSprites = !rotateSprites;
            return true;
        }
    });
    rotate.setPosition(64, blend.getY());
    Image scale = new Image(new TextureRegion(uiTexture, 64, 32, 64, 32));
    scale.setAlign(Align.center);
    scale.setScaling(Scaling.none);
    scale.addListener(new InputListener() {

        public boolean touchDown(InputEvent event, float x, float y, int pointer, int button) {
            scaleSprites = !scaleSprites;
            return true;
        }
    });
    scale.setPosition(128, blend.getY());
    {
        Actor shapeActor = new Actor() {

            public void drawDebug(ShapeRenderer shapes) {
                shapes.set(ShapeType.Filled);
                shapes.setColor(getColor());
                shapes.rect(getX(), getY(), getOriginX(), getOriginY(), getWidth(), getHeight(), getScaleX(), getScaleY(), getRotation());
            }
        };
        shapeActor.setBounds(0, 0, 100, 150);
        shapeActor.setOrigin(50, 75);
        shapeActor.debug();
        sprites.add(shapeActor);
        Group shapeGroup = new Group();
        shapeGroup.setBounds(300, 300, 300, 300);
        shapeGroup.setOrigin(50, 75);
        shapeGroup.setTouchable(Touchable.childrenOnly);
        shapeGroup.addActor(shapeActor);
        stage.addActor(shapeGroup);
    }
    ui.addActor(blend);
    ui.addActor(rotate);
    ui.addActor(scale);
    fps = new Label("fps: 0", new Label.LabelStyle(font, Color.WHITE));
    fps.setPosition(10, 30);
    fps.setColor(0, 1, 0, 1);
    ui.addActor(fps);
    renderer = new ShapeRenderer();
    Gdx.input.setInputProcessor(this);
}
