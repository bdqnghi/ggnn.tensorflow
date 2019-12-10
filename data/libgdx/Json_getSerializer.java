public <T> Serializer<T> getSerializer(Class<T> type) {
    return classToSerializer.get(type);
}
