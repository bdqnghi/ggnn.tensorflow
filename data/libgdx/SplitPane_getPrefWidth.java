@Override
public float getPrefWidth() {
    float first = firstWidget == null ? 0 : (firstWidget instanceof Layout ? ((Layout) firstWidget).getPrefWidth() : firstWidget.getWidth());
    float second = secondWidget == null ? 0 : (secondWidget instanceof Layout ? ((Layout) secondWidget).getPrefWidth() : secondWidget.getWidth());
    if (vertical)
        return Math.max(first, second);
    return first + style.handle.getMinWidth() + second;
}
