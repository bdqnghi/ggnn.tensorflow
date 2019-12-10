/**
 * Disposes the texture for each sprite for each ParticleEmitter.
 */
public void dispose() {
    if (!ownsTexture)
        return;
    for (int i = 0, n = emitters.size; i < n; i++) {
        ParticleEmitter emitter = emitters.get(i);
        emitter.getSprite().getTexture().dispose();
    }
}
