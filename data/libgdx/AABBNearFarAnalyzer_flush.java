public void flush() {
    super.freeAll(obtained);
    obtained.clear();
}
