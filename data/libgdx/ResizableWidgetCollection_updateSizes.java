/**
 * Update the current sizes.
 *
 * @return true if the sizes changed, false if not.
 */
public boolean updateSizes() {
    int offsetWidth = widget.getElement().getOffsetWidth();
    int offsetHeight = widget.getElement().getOffsetHeight();
    int clientWidth = widget.getElement().getClientWidth();
    int clientHeight = widget.getElement().getClientHeight();
    if (offsetWidth != curOffsetWidth || offsetHeight != curOffsetHeight || clientWidth != curClientWidth || clientHeight != curClientHeight) {
        this.curOffsetWidth = offsetWidth;
        this.curOffsetHeight = offsetHeight;
        this.curClientWidth = clientWidth;
        this.curClientHeight = clientHeight;
        return true;
    }
    return false;
}
