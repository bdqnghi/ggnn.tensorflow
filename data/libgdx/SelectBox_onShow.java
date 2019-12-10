protected void onShow(Actor selectBoxList, boolean below) {
    selectBoxList.getColor().a = 0;
    selectBoxList.addAction(fadeIn(0.3f, Interpolation.fade));
}
