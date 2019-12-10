/**
 * Makes the frame buffer current so everything gets drawn to it, must be followed by call to either {@link #nextSide()} or
 * {@link #bindSide(com.badlogic.gdx.graphics.Cubemap.CubemapSide)} to activate the side to render onto.
 */
@Override
public void bind() {
    currentSide = -1;
    super.bind();
}
