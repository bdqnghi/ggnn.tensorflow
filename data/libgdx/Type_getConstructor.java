public Constructor getConstructor(Class... parameterTypes) throws NoSuchMethodException {
    for (Constructor c : constructors) {
        if (c.isPublic() && c.match(parameterTypes))
            return c;
    }
    throw new NoSuchMethodException();
}
