@Override
public void activateParticles(int startIndex, int count) {
    for (int i = startIndex, c = startIndex + count; i < c; ++i) {
        modelChannel.data[i] = pool.obtain();
    }
}
