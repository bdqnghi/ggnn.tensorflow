@Override
public T obtain() {
    T result = super.obtain();
    obtained.add(result);
    return result;
}
