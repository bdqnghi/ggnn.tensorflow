@Override
protected void finalize() throws Throwable {
    Log.i(TAG, "service finalized");
    super.finalize();
}
