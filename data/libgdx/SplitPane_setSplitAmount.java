/**
 * @param split The split amount between the min and max amount.
 */
public void setSplitAmount(float split) {
    this.splitAmount = Math.max(Math.min(maxAmount, split), minAmount);
    invalidate();
}
