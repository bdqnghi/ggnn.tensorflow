/**
 * Pushes a new scissor {@link Rectangle} onto the stack, merging it with the current top of the stack. The minimal area of
 * overlap between the top of stack rectangle and the provided rectangle is pushed onto the stack. This will invoke
 * {@link GL20#glScissor(int, int, int, int)} with the final top of stack rectangle. In case no scissor is yet on the stack
 * this will also enable {@link GL20#GL_SCISSOR_TEST} automatically.
 * <p>
 * Any drawing should be flushed before pushing scissors.
 * @return true if the scissors were pushed. false if the scissor area was zero, in this case the scissors were not pushed and
 *         no drawing should occur.
 */
public static boolean pushScissors(Rectangle scissor) {
    fix(scissor);
    if (scissors.size == 0) {
        if (scissor.width < 1 || scissor.height < 1)
            return false;
        Gdx.gl.glEnable(GL20.GL_SCISSOR_TEST);
    } else {
        // merge scissors
        Rectangle parent = scissors.get(scissors.size - 1);
        float minX = Math.max(parent.x, scissor.x);
        float maxX = Math.min(parent.x + parent.width, scissor.x + scissor.width);
        if (maxX - minX < 1)
            return false;
        float minY = Math.max(parent.y, scissor.y);
        float maxY = Math.min(parent.y + parent.height, scissor.y + scissor.height);
        if (maxY - minY < 1)
            return false;
        scissor.x = minX;
        scissor.y = minY;
        scissor.width = maxX - minX;
        scissor.height = Math.max(1, maxY - minY);
    }
    scissors.add(scissor);
    Gdx.gl.glScissor((int) scissor.x, (int) scissor.y, (int) scissor.width, (int) scissor.height);
    return true;
}
