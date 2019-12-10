/**
 * Add a value and update all fields.
 * @param value The value to add
 */
public void put(float value) {
    latest = value;
    total += value;
    count++;
    average = total / count;
    if (mean != null) {
        mean.addValue(value);
        this.value = mean.getMean();
    } else
        this.value = latest;
    if (mean == null || mean.hasEnoughData()) {
        if (this.value < min)
            min = this.value;
        if (this.value > max)
            max = this.value;
    }
}
