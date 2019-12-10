Dialog createDialog() {
    textView = createView(context);
    textView.setOnKeyListener(this);
    FrameLayout.LayoutParams textBoxLayoutParams = new FrameLayout.LayoutParams(FrameLayout.LayoutParams.MATCH_PARENT, FrameLayout.LayoutParams.WRAP_CONTENT, Gravity.BOTTOM);
    textView.setLayoutParams(textBoxLayoutParams);
    textView.setFocusable(true);
    textView.setFocusableInTouchMode(true);
    textView.setImeOptions(textView.getImeOptions() | EditorInfo.IME_FLAG_NO_EXTRACT_UI);
    final FrameLayout layout = new FrameLayout(context);
    ViewGroup.LayoutParams layoutParams = new ViewGroup.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, 0);
    layout.setLayoutParams(layoutParams);
    layout.addView(textView);
    layout.setOnTouchListener(this);
    dialog = new Dialog(context, android.R.style.Theme_Translucent_NoTitleBar_Fullscreen);
    dialog.setContentView(layout);
    return dialog;
}
