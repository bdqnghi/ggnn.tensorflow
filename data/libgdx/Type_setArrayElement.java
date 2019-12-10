/**
 * Sets the element i in the array object to value.
 * @param obj an array object of this type.
 * @param i the index of the element to set.
 * @param value the element value.
 */
public void setArrayElement(Object obj, int i, Object value) {
    ReflectionCache.setArrayElement(this, obj, i, value);
}
