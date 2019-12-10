public void dampenForLowResTicker() {
    if (this.avg() > DAMPEN_THRESHOLD) {
        for (int i = 0; i < this.slots.length; i++) {
            this.slots[i] *= DAMPEN_FACTOR;
        }
    }
}
