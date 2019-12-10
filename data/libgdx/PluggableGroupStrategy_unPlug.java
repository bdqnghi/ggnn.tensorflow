/**
 * Remove a plug from the strategy
 * @param group Group to remove the plug from
 * @return removed plug, null if there was none for that group
 */
public GroupPlug unPlug(int group) {
    return plugs.remove(group);
}
