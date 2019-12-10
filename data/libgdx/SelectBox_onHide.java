protected void onHide(Actor selectBoxList) {
    selectBoxList.getColor().a = 1;
    selectBoxList.addAction(sequence(fadeOut(0.15f, Interpolation.fade), removeActor()));
}
