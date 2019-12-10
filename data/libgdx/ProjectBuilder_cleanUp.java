public void cleanUp() {
    settingsFile.deleteOnExit();
    buildFile.deleteOnExit();
}
