/**
 * Add a decal to the batch, marking it for later rendering
 *
 * @param decal Decal to add for rendering
 */
public void add(Decal decal) {
    int groupIndex = groupStrategy.decideGroup(decal);
    Array<Decal> targetGroup = groupList.get(groupIndex);
    if (targetGroup == null) {
        targetGroup = groupPool.obtain();
        targetGroup.clear();
        usedGroups.add(targetGroup);
        groupList.insert(groupIndex, targetGroup);
    }
    targetGroup.add(decal);
}
