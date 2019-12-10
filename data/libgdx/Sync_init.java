public void init(long value) {
    while (this.offset < this.slots.length) {
        this.slots[this.offset++] = value;
    }
}
