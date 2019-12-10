@Override
public void actionPerformed(ActionEvent e) {
    String testName = (String) list.getSelectedValue();
    prefs.putString("last", testName);
    prefs.flush();
    JglfwTestStarter.this.setVisible(false);
    runTest(testName).addLifecycleListener(new LifecycleListener() {

        public void resume() {
        }

        public void pause() {
        }

        public void dispose() {
            JglfwTestStarter.this.setVisible(true);
        }
    });
}
