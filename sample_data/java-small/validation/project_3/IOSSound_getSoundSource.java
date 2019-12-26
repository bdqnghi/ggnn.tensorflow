private ALSource getSoundSource(long soundId) {
    for (ALSource source : sourcePool) {
        if (source.getSourceId() == soundId)
            return source;
    }
    return null;
}
