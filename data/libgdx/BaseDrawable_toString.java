public String toString() {
    if (name == null)
        return ClassReflection.getSimpleName(getClass());
    return name;
}
