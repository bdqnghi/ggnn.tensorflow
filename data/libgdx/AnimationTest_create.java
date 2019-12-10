@Override
public void create() {
    texture = new Texture(Gdx.files.internal("data/walkanim.png"));
    TextureRegion[] leftWalkFrames = TextureRegion.split(texture, 64, 64)[0];
    TextureRegion[] rightWalkFrames = new TextureRegion[leftWalkFrames.length];
    for (int i = 0; i < rightWalkFrames.length; i++) {
        TextureRegion frame = new TextureRegion(leftWalkFrames[i]);
        frame.flip(true, false);
        rightWalkFrames[i] = frame;
    }
    leftWalk = new Animation(0.25f, leftWalkFrames);
    rightWalk = new Animation(0.25f, rightWalkFrames);
    cavemen = new Caveman[100];
    for (int i = 0; i < 100; i++) {
        cavemen[i] = new Caveman((float) Math.random() * Gdx.graphics.getWidth(), (float) Math.random() * Gdx.graphics.getHeight(), Math.random() > 0.5 ? true : false);
    }
    batch = new SpriteBatch();
    fpsLog = new FPSLogger();
}
