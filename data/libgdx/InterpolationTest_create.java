@Override
public void create() {
    Gdx.gl.glClearColor(.3f, .3f, .3f, 1);
    renderer = new ShapeRenderer();
    skin = new Skin(Gdx.files.internal("data/uiskin.json"));
    stage = new Stage(new ScreenViewport());
    resetPositions();
    Field[] interpolationFields = ClassReflection.getFields(Interpolation.class);
    // see how many fields are actually interpolations (for safety; other fields may be added with future)
    int interpolationMembers = 0;
    for (int i = 0; i < interpolationFields.length; i++) if (Interpolation.class.isAssignableFrom(interpolationFields[i].getDeclaringClass()))
        interpolationMembers++;
    // get interpolation names
    interpolationNames = new String[interpolationMembers];
    for (int i = 0; i < interpolationFields.length; i++) if (Interpolation.class.isAssignableFrom(interpolationFields[i].getDeclaringClass()))
        interpolationNames[i] = interpolationFields[i].getName();
    selectedInterpolation = interpolationNames[0];
    list = new List(skin);
    list.setItems(interpolationNames);
    list.addListener(new ChangeListener() {

        public void changed(ChangeEvent event, Actor actor) {
            selectedInterpolation = list.getSelected();
            time = 0;
            resetPositions();
        }
    });
    ScrollPane scroll = new ScrollPane(list, skin);
    scroll.setFadeScrollBars(false);
    scroll.setScrollingDisabled(true, false);
    table = new Table();
    table.setFillParent(true);
    table.add(scroll).expandX().left().width(100);
    stage.addActor(table);
    Gdx.input.setInputProcessor(new InputMultiplexer(new InputAdapter() {

        public boolean scrolled(int amount) {
            if (!Gdx.input.isKeyPressed(Keys.CONTROL_LEFT))
                return false;
            duration -= amount / 15f;
            duration = MathUtils.clamp(duration, 0, Float.POSITIVE_INFINITY);
            return true;
        }
    }, stage, new InputAdapter() {

        public boolean touchDown(int screenX, int screenY, int pointer, int button) {
            if (// if "walking" was interrupted by this touch down event
            !Float.isNaN(time))
                // set startPosition to the current position
                startPosition.set(getPosition(time));
            targetPosition.set(stage.screenToStageCoordinates(targetPosition.set(screenX, screenY)));
            time = 0;
            return true;
        }
    }));
}
