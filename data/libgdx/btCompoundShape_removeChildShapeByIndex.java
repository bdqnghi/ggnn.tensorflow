public void removeChildShapeByIndex(int index) {
    internalRemoveChildShapeByIndex(index);
    children.removeIndex(index).release();
}
