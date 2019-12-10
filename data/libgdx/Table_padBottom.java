/**
 * Padding at the bottom edge of the table.
 */
public Table padBottom(float padBottom) {
    this.padBottom = new Fixed(padBottom);
    sizeInvalid = true;
    return this;
}
