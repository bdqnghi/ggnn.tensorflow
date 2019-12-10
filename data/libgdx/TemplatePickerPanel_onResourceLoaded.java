@Override
public void onResourceLoaded(T model) {
    reloadTemplates();
    if (lastSelected == -1 && isOneModelSelectedRequired) {
        templateChecked(loadedTemplates.size - 1, true);
    } else {
        setValue(value);
    }
    revalidate();
    repaint();
}
