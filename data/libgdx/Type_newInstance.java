/**
 * @return a new instance of this type created via the default constructor which must be public.
 */
public Object newInstance() throws NoSuchMethodException {
    return getConstructor().newInstance();
}
