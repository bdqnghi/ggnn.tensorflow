@Override
public void create() {
    spriteBatch = new SpriteBatch();
    effect = new ParticleEffect();
    effect.load(Gdx.files.internal("data/test.p"), Gdx.files.internal("data"));
    effect.setPosition(Gdx.graphics.getWidth() / 2, Gdx.graphics.getHeight() / 2);
    // Of course, a ParticleEffect is normally just used, without messing around with its emitters.
    emitters = new Array(effect.getEmitters());
    effect.getEmitters().clear();
    effect.getEmitters().add(emitters.get(0));
    inputProcessor = new InputProcessor() {

        public boolean touchUp(int x, int y, int pointer, int button) {
            return false;
        }

        public boolean touchDragged(int x, int y, int pointer) {
            effect.setPosition(x, Gdx.graphics.getHeight() - y);
            return false;
        }

        public boolean touchDown(int x, int y, int pointer, int newParam) {
            // effect.setPosition(x, Gdx.graphics.getHeight() - y);
            ParticleEmitter emitter = emitters.get(emitterIndex);
            particleCount += 100;
            System.out.println(particleCount);
            particleCount = Math.max(0, particleCount);
            if (particleCount > emitter.getMaxParticleCount())
                emitter.setMaxParticleCount(particleCount * 2);
            emitter.getEmission().setHigh(particleCount / emitter.getLife().getHighMax() * 1000);
            effect.getEmitters().clear();
            effect.getEmitters().add(emitter);
            return false;
        }

        public boolean keyUp(int keycode) {
            return false;
        }

        public boolean keyTyped(char character) {
            return false;
        }

        public boolean keyDown(int keycode) {
            ParticleEmitter emitter = emitters.get(emitterIndex);
            if (keycode == Input.Keys.DPAD_UP)
                particleCount += 5;
            else if (keycode == Input.Keys.DPAD_DOWN)
                particleCount -= 5;
            else if (keycode == Input.Keys.SPACE) {
                emitterIndex = (emitterIndex + 1) % emitters.size;
                emitter = emitters.get(emitterIndex);
                // if we've previously stopped the emitter reset it
                if (emitter.isComplete())
                    emitter.reset();
                particleCount = (int) (emitter.getEmission().getHighMax() * emitter.getLife().getHighMax() / 1000f);
            } else if (keycode == Input.Keys.ENTER) {
                emitter = emitters.get(emitterIndex);
                if (emitter.isComplete())
                    emitter.reset();
                else
                    emitter.allowCompletion();
            } else
                return false;
            particleCount = Math.max(0, particleCount);
            if (particleCount > emitter.getMaxParticleCount())
                emitter.setMaxParticleCount(particleCount * 2);
            emitter.getEmission().setHigh(particleCount / emitter.getLife().getHighMax() * 1000);
            effect.getEmitters().clear();
            effect.getEmitters().add(emitter);
            return false;
        }

        @Override
        public boolean mouseMoved(int x, int y) {
            return false;
        }

        @Override
        public boolean scrolled(int amount) {
            return false;
        }
    };
    Gdx.input.setInputProcessor(inputProcessor);
}
