/**
 * works only for Chrome > Version 18 with enabled Mouse Lock enable in about:flags or start Chrome with the
 * --enable-pointer-lock flag
 */
@Override
public void setCursorCatched(boolean catched) {
    if (catched)
        setCursorCatchedJSNI(canvas);
    else
        exitCursorCatchedJSNI();
}
