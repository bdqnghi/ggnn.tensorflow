/**
 * Configures this viewport's screen bounds using the specified screen size and calls {@link #apply(boolean)}. Typically called
 * from {@link ApplicationListener#resize(int, int)} or {@link Screen#resize(int, int)}.
 * <p>
 * The default implementation only calls {@link #apply(boolean)}.
 */
public void update(int screenWidth, int screenHeight, boolean centerCamera) {
    apply(centerCamera);
}
