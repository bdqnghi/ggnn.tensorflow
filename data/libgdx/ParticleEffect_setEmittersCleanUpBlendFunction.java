/**
 * Sets the {@link com.badlogic.gdx.graphics.g2d.ParticleEmitter#setCleansUpBlendFunction(boolean) cleansUpBlendFunction}
 * parameter on all {@link com.badlogic.gdx.graphics.g2d.ParticleEmitter ParticleEmitters} currently in this ParticleEffect.
 * <p>
 * IMPORTANT: If set to false and if the next object to use this Batch expects alpha blending, you are responsible for setting
 * the Batch's blend function to (GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA) before that next object is drawn.
 * @param cleanUpBlendFunction
 */
public void setEmittersCleanUpBlendFunction(boolean cleanUpBlendFunction) {
    for (int i = 0, n = emitters.size; i < n; i++) {
        emitters.get(i).setCleansUpBlendFunction(cleanUpBlendFunction);
    }
}
