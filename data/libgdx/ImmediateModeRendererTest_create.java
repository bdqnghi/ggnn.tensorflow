@Override
public void create() {
    renderer = new ImmediateModeRenderer20(false, true, 1);
    texture = new Texture(Gdx.files.internal("data/badlogic.jpg"));
}
