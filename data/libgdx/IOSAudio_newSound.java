@Override
public Sound newSound(FileHandle fileHandle) {
    return new IOSSound(fileHandle);
}
