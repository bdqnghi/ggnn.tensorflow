public int hashCode() {
    return parent != null ? parent.hashCode() + name.hashCode() : name.hashCode();
}
