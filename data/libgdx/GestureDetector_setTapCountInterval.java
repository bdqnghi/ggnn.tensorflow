/**
 * @param tapCountInterval time in seconds that must pass for two touch down/up sequences to be detected as consecutive taps.
 */
public void setTapCountInterval(float tapCountInterval) {
    this.tapCountInterval = (long) (tapCountInterval * 1000000000l);
}
