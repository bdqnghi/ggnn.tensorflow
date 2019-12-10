/**
 * Padding at the top edge of the table.
 */
public Table padTop(float padTop) {
    this.padTop = new Fixed(padTop);
    sizeInvalid = true;
    return this;
}
