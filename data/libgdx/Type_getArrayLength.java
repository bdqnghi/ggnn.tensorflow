/**
 * @param obj an array object of this type.
 * @return the length of the given array object.
 */
public int getArrayLength(Object obj) {
    return ReflectionCache.getArrayLength(this, obj);
}
