@Override
public int getVersion() {
    return Integer.parseInt(UIDevice.getCurrentDevice().getSystemVersion().split("\\.")[0]);
}
