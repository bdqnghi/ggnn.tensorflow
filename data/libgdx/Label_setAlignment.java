/**
 * @param labelAlign Aligns all the text within the label (default left center).
 * @param lineAlign Aligns each line of text horizontally (default left).
 * @see Align
 */
public void setAlignment(int labelAlign, int lineAlign) {
    this.labelAlign = labelAlign;
    if ((lineAlign & Align.left) != 0)
        this.lineAlign = Align.left;
    else if ((lineAlign & Align.right) != 0)
        this.lineAlign = Align.right;
    else
        this.lineAlign = Align.center;
    invalidate();
}
