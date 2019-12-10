/**
 * Set the glWrapper. If the glWrapper is not null, its
 * {@link GLWrapper#wrap(GL)} method is called
 * whenever a surface is created. A GLWrapper can be used to wrap
 * the GL object that's passed to the renderer. Wrapping a GL
 * object enables examining and modifying the behavior of the
 * GL calls made by the renderer.
 * <p>
 * Wrapping is typically used for debugging purposes.
 * <p>
 * The default value is null.
 * @param glWrapper the new GLWrapper
 */
public void setGLWrapper(GLWrapper glWrapper) {
    mGLWrapper = glWrapper;
}
