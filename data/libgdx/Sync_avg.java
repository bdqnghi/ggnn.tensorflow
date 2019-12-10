public long avg() {
    long sum = 0;
    for (int i = 0; i < this.slots.length; i++) {
        sum += this.slots[i];
    }
    return sum / this.slots.length;
}
