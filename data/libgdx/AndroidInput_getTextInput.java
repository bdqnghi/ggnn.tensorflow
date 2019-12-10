@Override
public void getTextInput(final TextInputListener listener, final String title, final String text, final String hint) {
    handle.post(new Runnable() {

        public void run() {
            AlertDialog.Builder alert = new AlertDialog.Builder(context);
            alert.setTitle(title);
            final EditText input = new EditText(context);
            input.setHint(hint);
            input.setText(text);
            input.setSingleLine();
            alert.setView(input);
            alert.setPositiveButton(context.getString(android.R.string.ok), new DialogInterface.OnClickListener() {

                public void onClick(DialogInterface dialog, int whichButton) {
                    Gdx.app.postRunnable(new Runnable() {

                        @Override
                        public void run() {
                            listener.input(input.getText().toString());
                        }
                    });
                }
            });
            alert.setNegativeButton(context.getString(android.R.string.cancel), new DialogInterface.OnClickListener() {

                public void onClick(DialogInterface dialog, int whichButton) {
                    Gdx.app.postRunnable(new Runnable() {

                        @Override
                        public void run() {
                            listener.canceled();
                        }
                    });
                }
            });
            alert.setOnCancelListener(new OnCancelListener() {

                @Override
                public void onCancel(DialogInterface arg0) {
                    Gdx.app.postRunnable(new Runnable() {

                        @Override
                        public void run() {
                            listener.canceled();
                        }
                    });
                }
            });
            alert.show();
        }
    });
}
