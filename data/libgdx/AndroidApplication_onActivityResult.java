@Override
protected void onActivityResult(int requestCode, int resultCode, Intent data) {
    super.onActivityResult(requestCode, resultCode, data);
    // forward events to our listeners if there are any installed
    synchronized (androidEventListeners) {
        for (int i = 0; i < androidEventListeners.size; i++) {
            androidEventListeners.get(i).onActivityResult(requestCode, resultCode, data);
        }
    }
}
