public static TextView createView(Context context) {
    final TextView view = new TextView(context) {

        Editable editable = new PassThroughEditable();

        @Override
        protected boolean getDefaultEditable() {
            return true;
        }

        @Override
        public Editable getEditableText() {
            return editable;
        }

        @Override
        protected MovementMethod getDefaultMovementMethod() {
            return ArrowKeyMovementMethod.getInstance();
        }

        @Override
        public boolean onKeyDown(int keyCode, KeyEvent event) {
            Log.d("Test", "down keycode: " + event.getKeyCode());
            return super.onKeyDown(keyCode, event);
        }

        @Override
        public boolean onKeyUp(int keyCode, KeyEvent event) {
            Log.d("Test", "up keycode: " + event.getKeyCode());
            return super.onKeyUp(keyCode, event);
        }
    };
    // view.setCursorVisible(false);
    return view;
}
