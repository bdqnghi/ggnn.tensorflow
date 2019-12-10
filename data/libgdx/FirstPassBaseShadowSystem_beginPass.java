@Override
protected void beginPass(int n) {
    super.beginPass(n);
    if (n == FIRST_PASS)
        beginPass1();
}
