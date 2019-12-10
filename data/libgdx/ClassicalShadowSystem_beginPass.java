@Override
protected void beginPass(int n) {
    super.beginPass(n);
    if (n == SECOND_PASS)
        beginPass2();
}
