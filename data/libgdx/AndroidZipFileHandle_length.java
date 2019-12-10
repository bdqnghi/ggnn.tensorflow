@Override
public long length() {
    return assetFd != null ? assetFd.getLength() : 0;
}
