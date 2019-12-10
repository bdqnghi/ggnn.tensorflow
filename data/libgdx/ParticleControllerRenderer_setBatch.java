@SuppressWarnings("unchecked")
public boolean setBatch(ParticleBatch<?> batch) {
    if (isCompatible(batch)) {
        this.batch = (T) batch;
        return true;
    }
    return false;
}
