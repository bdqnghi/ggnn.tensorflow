public void addConstructor(final String name, final Constructor<T> constructor) {
    constructors.put(name, constructor);
    if (constructor.model != null && !models.contains(constructor.model, true))
        models.add(constructor.model);
}
