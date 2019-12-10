private void checkName() {
    if (current != null) {
        if (!current.array) {
            if (!named)
                throw new IllegalStateException("Name must be set.");
            named = false;
        }
    }
}
