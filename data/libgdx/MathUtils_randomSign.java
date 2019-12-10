/**
 * Returns -1 or 1, randomly.
 */
static public int randomSign() {
    return 1 | (random.nextInt() >> 31);
}
