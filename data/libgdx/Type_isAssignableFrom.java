/**
 * @param otherType the other type
 * @return whether this type is assignable to the other type.
 */
public boolean isAssignableFrom(Type otherType) {
    return clazz == otherType.clazz || (clazz == Object.class && !otherType.isPrimitive) || otherType.assignables.contains(clazz);
}
