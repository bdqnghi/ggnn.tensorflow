/**
 * Returns a random number between start (inclusive) and end (exclusive).
 */
static public float random(float start, float end) {
    return start + random.nextFloat() * (end - start);
}
