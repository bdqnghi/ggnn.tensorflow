private String convertToString(Object object) {
    if (object instanceof Enum)
        return convertToString((Enum) object);
    if (object instanceof Class)
        return ((Class) object).getName();
    return String.valueOf(object);
}
