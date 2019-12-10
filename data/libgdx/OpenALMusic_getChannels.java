public int getChannels() {
    return format == AL_FORMAT_STEREO16 ? 2 : 1;
}
