@Override
public void clear() {
    // Dispose every allocated instance because the templates may be changed
    for (int i = 0, free = pool.getFree(); i < free; ++i) {
        pool.obtain().dispose();
    }
    super.clear();
}
