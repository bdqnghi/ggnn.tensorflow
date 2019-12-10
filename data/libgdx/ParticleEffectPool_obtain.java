public PooledEffect obtain() {
    PooledEffect effect = super.obtain();
    effect.reset();
    return effect;
}
