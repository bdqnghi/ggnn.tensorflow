/**
 * Padding at the left edge of the table.
 */
public Table padLeft(float padLeft) {
    this.padLeft = new Fixed(padLeft);
    sizeInvalid = true;
    return this;
}
