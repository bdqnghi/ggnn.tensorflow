private void initialize() {
    setTouchable(Touchable.enabled);
    addListener(clickListener = new ClickListener() {

        public void clicked(InputEvent event, float x, float y) {
            if (isDisabled())
                return;
            setChecked(!isChecked, true);
        }
    });
}
