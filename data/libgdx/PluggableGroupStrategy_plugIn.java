/**
 * Set the plug used for a specific group. The plug will automatically be invoked.
 * @param plug Plug to use
 * @param group Group the plug is for
 */
public void plugIn(GroupPlug plug, int group) {
    plugs.put(group, plug);
}
