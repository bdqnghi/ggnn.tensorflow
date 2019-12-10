@Override
public float getPrefHeight() {
    float first = firstWidget == null ? 0 : (firstWidget instanceof Layout ? ((Layout) firstWidget).getPrefHeight() : firstWidget.getHeight());
    float second = secondWidget == null ? 0 : (secondWidget instanceof Layout ? ((Layout) secondWidget).getPrefHeight() : secondWidget.getHeight());
    if (!vertical)
        return Math.max(first, second);
    return first + style.handle.getMinHeight() + second;
}
