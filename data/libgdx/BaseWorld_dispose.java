@Override
public void dispose() {
    for (int i = 0; i < entities.size; i++) entities.get(i).dispose();
    entities.clear();
    for (Constructor<T> constructor : constructors.values()) constructor.dispose();
    constructors.clear();
    models.clear();
}
