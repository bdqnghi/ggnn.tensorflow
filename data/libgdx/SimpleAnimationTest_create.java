@Override
public void create() {
    Gdx.input.setInputProcessor(this);
    texture = new Texture(Gdx.files.internal("data/animation.png"));
    TextureRegion[][] regions = TextureRegion.split(texture, 32, 48);
    TextureRegion[] downWalkReg = regions[0];
    TextureRegion[] leftWalkReg = regions[1];
    TextureRegion[] rightWalkReg = regions[2];
    TextureRegion[] upWalkReg = regions[3];
    downWalk = new Animation(ANIMATION_SPEED, downWalkReg);
    leftWalk = new Animation(ANIMATION_SPEED, leftWalkReg);
    rightWalk = new Animation(ANIMATION_SPEED, rightWalkReg);
    upWalk = new Animation(ANIMATION_SPEED, upWalkReg);
    currentWalk = leftWalk;
    currentFrameTime = 0.0f;
    spriteBatch = new SpriteBatch();
    position = new Vector2();
}
