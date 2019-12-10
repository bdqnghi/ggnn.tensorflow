// end of lifecycle methods ////////////////////////////////////////////////////////
// input
@Override
public Bundle onCommand(final String pAction, final int pX, final int pY, final int pZ, final Bundle pExtras, final boolean pResultRequested) {
    if (DEBUG)
        Log.d(TAG, " > AndroidWallpaperEngine - onCommand(" + pAction + " " + pX + " " + pY + " " + pZ + " " + pExtras + " " + pResultRequested + ")" + ", linked: " + (linkedEngine == this));
    return super.onCommand(pAction, pX, pY, pZ, pExtras, pResultRequested);
}
