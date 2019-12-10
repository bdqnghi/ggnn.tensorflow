public boolean equals(Object obj) {
    if (!(obj instanceof File)) {
        return false;
    }
    return getPath().equals(((File) obj).getPath());
}
