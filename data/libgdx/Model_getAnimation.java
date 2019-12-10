/**
 * @param id The ID of the animation to fetch.
 * @param ignoreCase whether to use case sensitivity when comparing the animation id.
 * @return The {@link Animation} with the specified id, or null if not available.
 */
public Animation getAnimation(final String id, boolean ignoreCase) {
    final int n = animations.size;
    Animation animation;
    if (ignoreCase) {
        for (int i = 0; i < n; i++) if ((animation = animations.get(i)).id.equalsIgnoreCase(id))
            return animation;
    } else {
        for (int i = 0; i < n; i++) if ((animation = animations.get(i)).id.equals(id))
            return animation;
    }
    return null;
}
