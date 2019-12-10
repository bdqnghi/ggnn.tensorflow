private int getIosVersion() {
    String systemVersion = UIDevice.getCurrentDevice().getSystemVersion();
    int version = Integer.parseInt(systemVersion.split("\\.")[0]);
    return version;
}
