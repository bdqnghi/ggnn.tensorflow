/**
 * Set whether to automatically return the {@link com.badlogic.gdx.graphics.g2d.Batch Batch}'s blend function to the
 * alpha-blending default (GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA) when done drawing. Is true by default. If set to false, the
 * Batch's blend function is left as it was for drawing this ParticleEmitter, which prevents the Batch from being flushed
 * repeatedly if consecutive ParticleEmitters with the same additive or pre-multiplied alpha state are drawn in a row.
 * <p>
 * IMPORTANT: If set to false and if the next object to use this Batch expects alpha blending, you are responsible for setting
 * the Batch's blend function to (GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA) before that next object is drawn.
 * @param cleansUpBlendFunction
 */
public void setCleansUpBlendFunction(boolean cleansUpBlendFunction) {
    this.cleansUpBlendFunction = cleansUpBlendFunction;
}
