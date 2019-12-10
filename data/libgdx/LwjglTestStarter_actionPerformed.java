@Override
public void actionPerformed(ActionEvent e) {
    String testName = (String) list.getSelectedValue();
    prefs.putString("last", testName);
    prefs.flush();
    dispose();
    runTest(testName);
}
