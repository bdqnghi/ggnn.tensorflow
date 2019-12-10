/**
 * @param obj an array object of this type.
 * @param i the index of the element to retrieve.
 * @return the element at position i in the array.
 */
public Object getArrayElement(Object obj, int i) {
    return ReflectionCache.getArrayElement(this, obj, i);
}
