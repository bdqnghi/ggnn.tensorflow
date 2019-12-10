/**
 * Remove all decals from batch
 */
protected void clear() {
    groupList.clear();
    groupPool.freeAll(usedGroups);
    usedGroups.clear();
}
