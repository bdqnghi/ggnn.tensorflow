/**
 * Returns the internal seeds to allow state saving.
 * @param seed muse be 0 or 1, designating which of the 2 long seeds to return
 * @return the internal seed that can be used in setState
 */
public long getState(int seed) {
    return seed == 0 ? seed0 : seed1;
}
