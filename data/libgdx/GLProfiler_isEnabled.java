/**
 * @return Whether profiling is currently enabled
 */
public static boolean isEnabled() {
    return Gdx.gl30 instanceof GL30Profiler || Gdx.gl20 instanceof GL20Profiler;
}
