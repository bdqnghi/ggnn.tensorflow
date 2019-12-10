/**
 * If false, the text will only wrap where it contains newlines (\n). The preferred size of the label will be the text bounds.
 * If true, the text will word wrap using the width of the label. The preferred width of the label will be 0, it is expected
 * that the something external will set the width of the label. Wrapping will not occur when ellipsis is enabled. Default is
 * false.
 * <p>
 * When wrap is enabled, the label's preferred height depends on the width of the label. In some cases the parent of the label
 * will need to layout twice: once to set the width of the label and a second time to adjust to the label's new preferred
 * height.
 */
public void setWrap(boolean wrap) {
    this.wrap = wrap;
    invalidateHierarchy();
}
