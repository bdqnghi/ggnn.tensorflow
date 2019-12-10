public String toString() {
    if (isValue())
        return name == null ? asString() : name + ": " + asString();
    return (name == null ? "" : name + ": ") + prettyPrint(OutputType.minimal, 0);
}
