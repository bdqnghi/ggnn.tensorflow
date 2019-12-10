static private void hash(MessageDigest digest, int value) {
    digest.update((byte) (value >> 24));
    digest.update((byte) (value >> 16));
    digest.update((byte) (value >> 8));
    digest.update((byte) value);
}
