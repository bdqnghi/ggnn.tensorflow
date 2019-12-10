/**
 * Specifies whether to use integer positions. Default is to use them so filtering doesn't kick in as badly.
 */
public void setUseIntegerPositions(boolean integer) {
    this.integer = integer;
    cache.setUseIntegerPositions(integer);
}
