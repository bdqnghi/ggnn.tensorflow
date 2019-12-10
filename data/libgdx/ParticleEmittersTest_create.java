@Override
public void create() {
    spriteBatch = new SpriteBatch();
    effect = new ParticleEffect();
    effect.load(Gdx.files.internal("data/singleTextureAllAdditive.p"), Gdx.files.internal("data"));
    effect.setPosition(Gdx.graphics.getWidth() / 2, Gdx.graphics.getHeight() / 2);
    effectPool = new ParticleEffectPool(effect, 20, 20);
    setupUI();
    InputProcessor inputProcessor = new InputAdapter() {

        public boolean touchDragged(int x, int y, int pointer) {
            if (latestEffect != null)
                latestEffect.setPosition(x, Gdx.graphics.getHeight() - y);
            return false;
        }

        public boolean touchDown(int x, int y, int pointer, int newParam) {
            latestEffect = effectPool.obtain();
            latestEffect.setEmittersCleanUpBlendFunction(!skipCleanup.isChecked());
            latestEffect.setPosition(x, Gdx.graphics.getHeight() - y);
            effects.add(latestEffect);
            return false;
        }
    };
    InputMultiplexer multiplexer = new InputMultiplexer();
    multiplexer.addProcessor(ui);
    multiplexer.addProcessor(inputProcessor);
    Gdx.input.setInputProcessor(multiplexer);
}
