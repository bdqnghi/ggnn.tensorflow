/**
 * Set the debug flags to a new value. The value is
 * constructed by OR-together zero or more
 * of the DEBUG_CHECK_* constants. The debug flags take effect
 * whenever a surface is created. The default value is zero.
 * @param debugFlags the new debug flags
 * @see #DEBUG_CHECK_GL_ERROR
 * @see #DEBUG_LOG_GL_CALLS
 */
public void setDebugFlags(int debugFlags) {
    mDebugFlags = debugFlags;
}
