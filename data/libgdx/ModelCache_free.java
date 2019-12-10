@Override
public void free(T object) {
    obtained.removeValue(object, true);
    super.free(object);
}
