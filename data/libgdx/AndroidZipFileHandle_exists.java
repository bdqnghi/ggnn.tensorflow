@Override
public boolean exists() {
    return assetFd != null || expansionFile.getEntriesAt(getPath()).length != 0;
}
