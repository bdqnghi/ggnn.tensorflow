public T add(final String type, final Matrix4 transform) {
    final T entity = constructors.get(type).construct(transform);
    add(entity);
    return entity;
}
