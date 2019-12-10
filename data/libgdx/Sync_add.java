public void add(long value) {
    this.slots[this.offset++ % this.slots.length] = value;
    this.offset %= this.slots.length;
}
