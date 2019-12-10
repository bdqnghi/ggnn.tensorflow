private void notifyVisibilityChanged(final boolean visible) {
    if (this.engineIsVisible != visible) {
        this.engineIsVisible = visible;
        if (this.engineIsVisible)
            onResume();
        else
            onPause();
    } else {
        if (DEBUG)
            Log.d(TAG, " > visible state is current, skipping visibilityChanged event!");
    }
}
