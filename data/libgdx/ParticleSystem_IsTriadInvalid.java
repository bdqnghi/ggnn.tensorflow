static boolean IsTriadInvalid(final Triad triad) {
    return triad.indexA < 0 || triad.indexB < 0 || triad.indexC < 0;
}
