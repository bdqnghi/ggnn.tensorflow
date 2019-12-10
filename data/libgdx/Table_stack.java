/**
 * Adds a new cell to the table with the specified actors in a {@link Stack}.
 * @param actors May be null to add a stack without any actors.
 */
public Cell<Stack> stack(Actor... actors) {
    Stack stack = new Stack();
    if (actors != null) {
        for (int i = 0, n = actors.length; i < n; i++) stack.addActor(actors[i]);
    }
    return add(stack);
}
