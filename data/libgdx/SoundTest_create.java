@Override
public void create() {
    sound = Gdx.audio.newSound(Gdx.files.getFileHandle("data/shotgun.ogg", FileType.Internal));
    skin = new Skin(Gdx.files.internal("data/uiskin.json"));
    ui = new Stage();
    TextButton play = new TextButton("Play", skin);
    TextButton stop = new TextButton("Stop", skin);
    final Slider pitch = new Slider(0.1f, 4, 0.1f, false, skin);
    pitch.setValue(1);
    final Label pitchValue = new Label("1.0", skin);
    final Slider volume = new Slider(0.1f, 1, 0.1f, false, skin);
    volume.setValue(1);
    final Label volumeValue = new Label("1.0", skin);
    Table table = new Table();
    final Slider pan = new Slider(-1f, 1f, 0.1f, false, skin);
    pan.setValue(0);
    final Label panValue = new Label("0.0", skin);
    table.setFillParent(true);
    table.align(Align.center | Align.top);
    table.columnDefaults(0).expandX().right().uniformX();
    table.columnDefaults(2).expandX().left().uniformX();
    table.add(play);
    table.add(stop).left();
    table.row();
    table.add(new Label("Pitch", skin));
    table.add(pitch);
    table.add(pitchValue);
    table.row();
    table.add(new Label("Volume", skin));
    table.add(volume);
    table.add(volumeValue);
    table.row();
    table.add(new Label("Pan", skin));
    table.add(pan);
    table.add(panValue);
    ui.addActor(table);
    play.addListener(new ClickListener() {

        public void clicked(InputEvent event, float x, float y) {
            soundId = sound.play(volume.getValue());
            sound.setPitch(soundId, pitch.getValue());
            sound.setPan(soundId, pan.getValue(), volume.getValue());
        }
    });
    stop.addListener(new ClickListener() {

        public void clicked(InputEvent event, float x, float y) {
            sound.stop(soundId);
        }
    });
    pitch.addListener(new ChangeListener() {

        public void changed(ChangeEvent event, Actor actor) {
            sound.setPitch(soundId, pitch.getValue());
            pitchValue.setText("" + pitch.getValue());
        }
    });
    volume.addListener(new ChangeListener() {

        public void changed(ChangeEvent event, Actor actor) {
            sound.setVolume(soundId, volume.getValue());
            volumeValue.setText("" + volume.getValue());
        }
    });
    pan.addListener(new ChangeListener() {

        public void changed(ChangeEvent event, Actor actor) {
            sound.setPan(soundId, pan.getValue(), volume.getValue());
            panValue.setText("" + pan.getValue());
        }
    });
    Gdx.input.setInputProcessor(ui);
}
