public void setMinSplitAmount(float minAmount) {
    if (minAmount < 0)
        throw new GdxRuntimeException("minAmount has to be >= 0");
    if (minAmount >= maxAmount)
        throw new GdxRuntimeException("minAmount has to be < maxAmount");
    this.minAmount = minAmount;
}
