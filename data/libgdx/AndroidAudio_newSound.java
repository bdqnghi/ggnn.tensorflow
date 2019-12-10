/**
 * {@inheritDoc}
 */
@Override
public Sound newSound(FileHandle file) {
    if (soundPool == null) {
        throw new GdxRuntimeException("Android audio is not enabled by the application config.");
    }
    AndroidFileHandle aHandle = (AndroidFileHandle) file;
    if (aHandle.type() == FileType.Internal) {
        try {
            AssetFileDescriptor descriptor = aHandle.getAssetFileDescriptor();
            AndroidSound sound = new AndroidSound(soundPool, manager, soundPool.load(descriptor, 1));
            descriptor.close();
            return sound;
        } catch (IOException ex) {
            throw new GdxRuntimeException("Error loading audio file: " + file + "\nNote: Internal audio files must be placed in the assets directory.", ex);
        }
    } else {
        try {
            return new AndroidSound(soundPool, manager, soundPool.load(aHandle.file().getPath(), 1));
        } catch (Exception ex) {
            throw new GdxRuntimeException("Error loading audio file: " + file, ex);
        }
    }
}
