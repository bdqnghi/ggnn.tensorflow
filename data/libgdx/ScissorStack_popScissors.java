/**
 * Pops the current scissor rectangle from the stack and sets the new scissor area to the new top of stack rectangle. In case
 * no more rectangles are on the stack, {@link GL20#GL_SCISSOR_TEST} is disabled.
 * <p>
 * Any drawing should be flushed before popping scissors.
 */
public static Rectangle popScissors() {
    Rectangle old = scissors.pop();
    if (scissors.size == 0)
        Gdx.gl.glDisable(GL20.GL_SCISSOR_TEST);
    else {
        Rectangle scissor = scissors.peek();
        Gdx.gl.glScissor((int) scissor.x, (int) scissor.y, (int) scissor.width, (int) scissor.height);
    }
    return old;
}
