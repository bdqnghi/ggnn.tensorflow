/**
 * Sets the maximum number of buttons that can be checked. Set to -1 for no maximum. Default is 1.
 */
public void setMaxCheckCount(int maxCheckCount) {
    if (maxCheckCount == 0)
        maxCheckCount = -1;
    this.maxCheckCount = maxCheckCount;
}
