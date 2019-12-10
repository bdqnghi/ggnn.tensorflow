public void onCreate(Bundle bundle) {
    super.onCreate(bundle);
    Button b1 = new Button(this);
    b1.setText("Change Color");
    b1.setLayoutParams(new LinearLayout.LayoutParams(LayoutParams.FILL_PARENT, LayoutParams.WRAP_CONTENT));
    Button b2 = new Button(this);
    b2.setText("New Window");
    b2.setLayoutParams(new LinearLayout.LayoutParams(LayoutParams.FILL_PARENT, LayoutParams.WRAP_CONTENT));
    View view = initializeForView(this);
    LinearLayout layout = new LinearLayout(this);
    layout.setOrientation(LinearLayout.VERTICAL);
    layout.addView(b1);
    layout.addView(b2);
    layout.addView(view, new LinearLayout.LayoutParams(LayoutParams.FILL_PARENT, LayoutParams.FILL_PARENT));
    setContentView(layout);
    b1.setOnClickListener(new OnClickListener() {

        @Override
        public void onClick(View arg0) {
            color.set((float) Math.random(), (float) Math.random(), (float) Math.random(), 1);
        }
    });
    b2.setOnClickListener(new OnClickListener() {

        @Override
        public void onClick(View v) {
            Intent intent = new Intent(WindowedTest.this, WindowedTest.class);
            WindowedTest.this.startActivity(intent);
        }
    });
}
