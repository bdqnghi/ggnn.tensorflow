@Override
public void setOnscreenKeyboardVisible(final boolean visible) {
    handle.post(new Runnable() {

        public void run() {
            InputMethodManager manager = (InputMethodManager) context.getSystemService(Context.INPUT_METHOD_SERVICE);
            if (visible) {
                View view = ((AndroidGraphics) app.getGraphics()).getView();
                view.setFocusable(true);
                view.setFocusableInTouchMode(true);
                manager.showSoftInput(((AndroidGraphics) app.getGraphics()).getView(), 0);
            } else {
                manager.hideSoftInputFromWindow(((AndroidGraphics) app.getGraphics()).getView().getWindowToken(), 0);
            }
        }
    });
}
