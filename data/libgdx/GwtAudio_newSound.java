@Override
public Sound newSound(FileHandle fileHandle) {
    return new GwtSound(fileHandle);
}
