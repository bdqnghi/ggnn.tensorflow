@Override
public void create() {
    Preferences pref = Gdx.app.getPreferences("test");
    boolean resultb = pref.getBoolean("test");
    int resulti = pref.getInteger("test");
    shader = new ShaderProgram(Gdx.files.internal("data/shaders/shader-vs.glsl"), Gdx.files.internal("data/shaders/shader-fs.glsl"));
    if (!shader.isCompiled())
        throw new GdxRuntimeException(shader.getLog());
    mesh = new Mesh(VertexDataType.VertexBufferObject, true, 6, 0, VertexAttribute.Position(), VertexAttribute.TexCoords(0));
    mesh.setVertices(new float[] { -0.5f, -0.5f, 0, 0, 1, 0.5f, -0.5f, 0, 1, 1, 0.5f, 0.5f, 0, 1, 0, 0.5f, 0.5f, 0, 1, 0, -0.5f, 0.5f, 0, 0, 0, -0.5f, -0.5f, 0, 0, 1 });
    texture = new Texture(new Pixmap(Gdx.files.internal("data/badlogic.jpg")), true);
    texture.setFilter(TextureFilter.MipMap, TextureFilter.Linear);
    String params = Gdx.files.internal("data/gwttestparams.txt").readString();
    numSprites = Integer.parseInt(params);
    batch = new SpriteBatch();
    positions = new ArrayList<Vector2>();
    for (int i = 0; i < numSprites; i++) {
        positions.add(new Vector2(MathUtils.random() * Gdx.graphics.getWidth(), MathUtils.random() * Gdx.graphics.getHeight()));
    }
    sprite = new Sprite(texture);
    sprite.setSize(64, 64);
    sprite.setOrigin(32, 32);
    font = new BitmapFont(Gdx.files.internal("data/arial-15.fnt"), false);
    cache = font.newFontCache();
    cache.setColor(Color.RED);
    cache.setText("This is a Test", 0, 0);
    atlas = new TextureAtlas(Gdx.files.internal("data/pack"));
}
