@Override
public void dispose() {
    if (rayTestCB != null)
        rayTestCB.dispose();
    rayTestCB = null;
    super.dispose();
}
