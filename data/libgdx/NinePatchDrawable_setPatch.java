public void setPatch(NinePatch patch) {
    this.patch = patch;
    setMinWidth(patch.getTotalWidth());
    setMinHeight(patch.getTotalHeight());
    setTopHeight(patch.getPadTop());
    setRightWidth(patch.getPadRight());
    setBottomHeight(patch.getPadBottom());
    setLeftWidth(patch.getPadLeft());
}
