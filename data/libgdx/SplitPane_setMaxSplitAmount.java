public void setMaxSplitAmount(float maxAmount) {
    if (maxAmount > 1)
        throw new GdxRuntimeException("maxAmount has to be <= 1");
    if (maxAmount <= minAmount)
        throw new GdxRuntimeException("maxAmount has to be > minAmount");
    this.maxAmount = maxAmount;
}
