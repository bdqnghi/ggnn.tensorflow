@Override
protected void finalize() throws Throwable {
    if (!destroyed)
        destroy();
    super.finalize();
}
