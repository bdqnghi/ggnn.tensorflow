@Override
public void create() {
    batch = new SpriteBatch(10);
    ShaderProgram.pedantic = false;
    shader = new ShaderProgram(Gdx.files.internal("data/shaders/batch.vert").readString(), Gdx.files.internal("data/shaders/batch.frag").readString());
    batch.setShader(shader);
    texture = new Texture("data/badlogic.jpg");
}
