/**
 * Ends clipping begun by {@link #clipBegin(float, float, float, float)}.
 */
public void clipEnd() {
    Pools.free(ScissorStack.popScissors());
}
