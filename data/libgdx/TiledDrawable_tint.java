public TiledDrawable tint(Color tint) {
    TiledDrawable drawable = new TiledDrawable(this);
    drawable.color.set(tint);
    drawable.setLeftWidth(getLeftWidth());
    drawable.setRightWidth(getRightWidth());
    drawable.setTopHeight(getTopHeight());
    drawable.setBottomHeight(getBottomHeight());
    return drawable;
}
