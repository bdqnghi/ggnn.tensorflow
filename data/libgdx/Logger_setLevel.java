/**
 * Sets the log level. {@link #NONE} will mute all log output. {@link #ERROR} will only let error messages through.
 * {@link #INFO} will let all non-debug messages through, and {@link #DEBUG} will let all messages through.
 * @param level {@link #NONE}, {@link #ERROR}, {@link #INFO}, {@link #DEBUG}.
 */
public void setLevel(int level) {
    this.level = level;
}
