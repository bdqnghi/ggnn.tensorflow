public T wrap(long handle) {
    VM.setLong(VM.getObjectAddress(instance) + HANDLE_OFFSET, handle);
    return instance;
}
