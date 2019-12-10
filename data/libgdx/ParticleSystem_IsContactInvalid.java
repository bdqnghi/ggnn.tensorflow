static boolean IsContactInvalid(final ParticleContact contact) {
    return contact.indexA < 0 || contact.indexB < 0;
}
