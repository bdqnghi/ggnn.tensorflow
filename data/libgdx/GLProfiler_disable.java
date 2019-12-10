/**
 * Disables profiling by resetting the {@code GL20} and {@code GL30} instances with the original ones.
 */
public static void disable() {
    if (Gdx.gl30 != null && Gdx.gl30 instanceof GL30Profiler)
        Gdx.gl30 = ((GL30Profiler) Gdx.gl30).gl30;
    if (Gdx.gl20 != null && Gdx.gl20 instanceof GL20Profiler)
        Gdx.gl20 = ((GL20Profiler) Gdx.gl).gl20;
    if (Gdx.gl != null && Gdx.gl instanceof GL20Profiler)
        Gdx.gl = ((GL20Profiler) Gdx.gl).gl20;
}
