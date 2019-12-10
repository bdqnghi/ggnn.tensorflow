public void setVisible(boolean visible) {
    if (visible && dialog != null) {
        dialog.dismiss();
        dialog = null;
    }
    if (visible && dialog == null && !input.isPeripheralAvailable(Peripheral.HardwareKeyboard)) {
        handler.post(new Runnable() {

            @Override
            public void run() {
                dialog = createDialog();
                dialog.show();
                handler.post(new Runnable() {

                    @Override
                    public void run() {
                        dialog.getWindow().setSoftInputMode(WindowManager.LayoutParams.SOFT_INPUT_ADJUST_PAN);
                        InputMethodManager input = (InputMethodManager) context.getSystemService(Context.INPUT_METHOD_SERVICE);
                        if (input != null)
                            input.showSoftInput(textView, InputMethodManager.SHOW_FORCED);
                    }
                });
                final View content = dialog.getWindow().findViewById(Window.ID_ANDROID_CONTENT);
                content.getViewTreeObserver().addOnPreDrawListener(new OnPreDrawListener() {

                    int[] screenloc = new int[2];

                    private int keyboardHeight;

                    private boolean keyboardShowing;

                    @Override
                    public boolean onPreDraw() {
                        content.getLocationOnScreen(screenloc);
                        keyboardHeight = Math.abs(screenloc[1]);
                        if (keyboardHeight > 0)
                            keyboardShowing = true;
                        if (keyboardHeight == 0 && keyboardShowing) {
                            dialog.dismiss();
                            dialog = null;
                        }
                        return true;
                    }
                });
            }
        });
    } else {
        if (!visible && dialog != null) {
            dialog.dismiss();
        }
    }
}
