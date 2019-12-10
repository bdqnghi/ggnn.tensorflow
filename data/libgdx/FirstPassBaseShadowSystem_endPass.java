@Override
protected void endPass(int n) {
    super.endPass(n);
    if (n == FIRST_PASS)
        endPass1();
}
