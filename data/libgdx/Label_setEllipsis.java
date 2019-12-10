/**
 * When true the text will be truncated "..." if it does not fit within the width of the label. Wrapping will not occur when
 * ellipsis is true. Default is false.
 */
public void setEllipsis(boolean ellipsis) {
    if (ellipsis)
        this.ellipsis = "...";
    else
        this.ellipsis = null;
}
