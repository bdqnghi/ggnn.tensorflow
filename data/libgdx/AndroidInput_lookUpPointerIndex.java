public int lookUpPointerIndex(int pointerId) {
    int len = realId.length;
    for (int i = 0; i < len; i++) {
        if (realId[i] == pointerId)
            return i;
    }
    StringBuffer buf = new StringBuffer();
    for (int i = 0; i < len; i++) {
        buf.append(i + ":" + realId[i] + " ");
    }
    Gdx.app.log("AndroidInput", "Pointer ID lookup failed: " + pointerId + ", " + buf.toString());
    return -1;
}
