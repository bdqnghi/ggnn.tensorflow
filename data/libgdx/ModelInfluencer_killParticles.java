@Override
public void killParticles(int startIndex, int count) {
    for (int i = startIndex, c = startIndex + count; i < c; ++i) {
        pool.free(modelChannel.data[i]);
        modelChannel.data[i] = null;
    }
}
