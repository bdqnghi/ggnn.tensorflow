public void writeType(Class type) {
    if (typeName == null)
        return;
    String className = getTag(type);
    if (className == null)
        className = type.getName();
    try {
        writer.set(typeName, className);
    } catch (IOException ex) {
        throw new SerializationException(ex);
    }
    if (debug)
        System.out.println("Writing type: " + type.getName());
}
