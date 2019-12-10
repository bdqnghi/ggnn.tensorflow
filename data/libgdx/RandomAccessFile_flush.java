void flush() throws IOException {
    if (!dirty) {
        return;
    }
    consolidate();
    File.LocalStorage.setItem(name, btoa(data));
    dirty = false;
}
