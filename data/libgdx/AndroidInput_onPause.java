public void onPause() {
    unregisterSensorListeners();
    // erase pointer ids. this sucks donkeyballs...
    Arrays.fill(realId, -1);
    // erase touched state. this also sucks donkeyballs...
    Arrays.fill(touched, false);
}
