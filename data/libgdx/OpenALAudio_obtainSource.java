int obtainSource(boolean isMusic) {
    if (noDevice)
        return 0;
    for (int i = 0, n = idleSources.size; i < n; i++) {
        int sourceId = idleSources.get(i);
        int state = alGetSourcei(sourceId, AL_SOURCE_STATE);
        if (state != AL_PLAYING && state != AL_PAUSED) {
            if (isMusic) {
                idleSources.removeIndex(i);
            } else {
                if (sourceToSoundId.containsKey(sourceId)) {
                    long soundId = sourceToSoundId.get(sourceId);
                    sourceToSoundId.remove(sourceId);
                    soundIdToSource.remove(soundId);
                }
                long soundId = nextSoundId++;
                sourceToSoundId.put(sourceId, soundId);
                soundIdToSource.put(soundId, sourceId);
            }
            alSourceStop(sourceId);
            alSourcei(sourceId, AL_BUFFER, 0);
            AL10.alSourcef(sourceId, AL10.AL_GAIN, 1);
            AL10.alSourcef(sourceId, AL10.AL_PITCH, 1);
            AL10.alSource3f(sourceId, AL10.AL_POSITION, 0, 0, 1f);
            return sourceId;
        }
    }
    return -1;
}
