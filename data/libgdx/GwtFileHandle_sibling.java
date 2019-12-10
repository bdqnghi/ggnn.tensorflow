public FileHandle sibling(String name) {
    return parent().child(fixSlashes(name));
}
