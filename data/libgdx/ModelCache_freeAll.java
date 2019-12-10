@Override
public void freeAll(Array<T> objects) {
    obtained.removeAll(objects, true);
    super.freeAll(objects);
}
