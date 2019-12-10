/**
 * Enables profiling by replacing the {@code GL20} and {@code GL30} instances with profiling ones.
 */
public static void enable() {
    if (!isEnabled()) {
        Gdx.gl30 = Gdx.gl30 == null ? null : new GL30Profiler(Gdx.gl30);
        Gdx.gl20 = Gdx.gl30 != null ? Gdx.gl30 : new GL20Profiler(Gdx.gl20);
        Gdx.gl = Gdx.gl20;
    }
}
