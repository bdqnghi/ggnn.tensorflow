/**
 * Padding at the right edge of the table.
 */
public Table padRight(float padRight) {
    this.padRight = new Fixed(padRight);
    sizeInvalid = true;
    return this;
}
