public void create() {
    stage = new Stage();
    Skin skin = new Skin(Gdx.files.internal("data/uiskin.json"));
    Gdx.input.setInputProcessor(stage);
    // Gdx.graphics.setVSync(false);
    container = new Table();
    stage.addActor(container);
    container.setFillParent(true);
    Table table = new Table();
    // table.debug();
    final ScrollPane scroll = new ScrollPane(table, skin);
    InputListener stopTouchDown = new InputListener() {

        public boolean touchDown(InputEvent event, float x, float y, int pointer, int button) {
            event.stop();
            return false;
        }
    };
    table.pad(10).defaults().expandX().space(4);
    for (int i = 0; i < 100; i++) {
        table.row();
        table.add(new Label(i + "uno", skin)).expandX().fillX();
        TextButton button = new TextButton(i + "dos", skin);
        table.add(button);
        button.addListener(new ClickListener() {

            public void clicked(InputEvent event, float x, float y) {
                System.out.println("click " + x + ", " + y);
            }
        });
        Slider slider = new Slider(0, 100, 1, false, skin);
        // Stops touchDown events from propagating to the FlickScrollPane.
        slider.addListener(stopTouchDown);
        table.add(slider);
        table.add(new Label(i + "tres long0 long1 long2 long3 long4 long5 long6 long7 long8 long9 long10 long11 long12", skin));
    }
    final TextButton flickButton = new TextButton("Flick Scroll", skin.get("toggle", TextButtonStyle.class));
    flickButton.setChecked(true);
    flickButton.addListener(new ChangeListener() {

        public void changed(ChangeEvent event, Actor actor) {
            scroll.setFlickScroll(flickButton.isChecked());
        }
    });
    final TextButton fadeButton = new TextButton("Fade Scrollbars", skin.get("toggle", TextButtonStyle.class));
    fadeButton.setChecked(true);
    fadeButton.addListener(new ChangeListener() {

        public void changed(ChangeEvent event, Actor actor) {
            scroll.setFadeScrollBars(fadeButton.isChecked());
        }
    });
    final TextButton smoothButton = new TextButton("Smooth Scrolling", skin.get("toggle", TextButtonStyle.class));
    smoothButton.setChecked(true);
    smoothButton.addListener(new ChangeListener() {

        public void changed(ChangeEvent event, Actor actor) {
            scroll.setSmoothScrolling(smoothButton.isChecked());
        }
    });
    final TextButton onTopButton = new TextButton("Scrollbars On Top", skin.get("toggle", TextButtonStyle.class));
    onTopButton.addListener(new ChangeListener() {

        public void changed(ChangeEvent event, Actor actor) {
            scroll.setScrollbarsOnTop(onTopButton.isChecked());
        }
    });
    container.add(scroll).expand().fill().colspan(4);
    container.row().space(10).padBottom(10);
    container.add(flickButton).right().expandX();
    container.add(onTopButton);
    container.add(smoothButton);
    container.add(fadeButton).left().expandX();
}
