/**
 * Sets the style on the actor to disabled or enabled. This is done by appending "-disabled" to the style name when enabled is
 * false, and removing "-disabled" from the style name when enabled is true. A method named "getStyle" is called the actor via
 * reflection and the name of that style is found in the skin. If the actor doesn't have a "getStyle" method or the style was
 * not found in the skin, no exception is thrown and the actor is left unchanged.
 */
public void setEnabled(Actor actor, boolean enabled) {
    // Get current style.
    Method method = findMethod(actor.getClass(), "getStyle");
    if (method == null)
        return;
    Object style;
    try {
        style = method.invoke(actor);
    } catch (Exception ignored) {
        return;
    }
    // Determine new style.
    String name = find(style);
    if (name == null)
        return;
    name = name.replace("-disabled", "") + (enabled ? "" : "-disabled");
    style = get(name, style.getClass());
    // Set new style.
    method = findMethod(actor.getClass(), "setStyle");
    if (method == null)
        return;
    try {
        method.invoke(actor, style);
    } catch (Exception ignored) {
    }
}
