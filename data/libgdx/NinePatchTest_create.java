@Override
public void create() {
    TestPatch tp;
    // Create all the NinePatches to test
    ninePatches.add(new TestPatch("default"));
    tp = new TestPatch("20px width");
    int bWidth = 20;
    tp.ninePatch.setLeftWidth(bWidth);
    tp.ninePatch.setRightWidth(bWidth);
    tp.ninePatch.setTopHeight(bWidth);
    tp.ninePatch.setBottomHeight(bWidth);
    ninePatches.add(tp);
    tp = new TestPatch("fat left");
    tp.ninePatch.setLeftWidth(3 * tp.ninePatch.getRightWidth());
    ninePatches.add(tp);
    tp = new TestPatch("fat top");
    tp.ninePatch.setTopHeight(3 * tp.ninePatch.getBottomHeight());
    ninePatches.add(tp);
    tp = new TestPatch("degenerate", newDegenerateNinePatch());
    ninePatches.add(tp);
    tp = new TestPatch("upper-left quad", newULQuadPatch());
    ninePatches.add(tp);
    tp = new TestPatch("no middle row", newMidlessPatch());
    ninePatches.add(tp);
    b = new SpriteBatch();
}
