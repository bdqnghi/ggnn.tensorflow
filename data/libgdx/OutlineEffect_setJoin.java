/**
 * Sets how the corners of the outline are drawn. This is usually only noticeable at large outline widths.
 * @param join One of: {@link BasicStroke#JOIN_BEVEL}, {@link BasicStroke#JOIN_MITER}, {@link BasicStroke#JOIN_ROUND}
 */
public void setJoin(int join) {
    this.join = join;
}
