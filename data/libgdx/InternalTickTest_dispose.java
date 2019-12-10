@Override
public void dispose() {
    super.dispose();
    if (internalTickCallback != null)
        internalTickCallback.dispose();
    internalTickCallback = null;
}
