@Override
public boolean onGenericMotion(View view, MotionEvent event) {
    if (mouseHandler.onGenericMotion(event, this))
        return true;
    for (int i = 0, n = genericMotionListeners.size(); i < n; i++) if (genericMotionListeners.get(i).onGenericMotion(view, event))
        return true;
    return false;
}
