void setChecked(boolean isChecked, boolean fireEvent) {
    if (this.isChecked == isChecked)
        return;
    if (buttonGroup != null && !buttonGroup.canCheck(this, isChecked))
        return;
    this.isChecked = isChecked;
    if (fireEvent) {
        ChangeEvent changeEvent = Pools.obtain(ChangeEvent.class);
        if (fire(changeEvent))
            this.isChecked = !isChecked;
        Pools.free(changeEvent);
    }
}
