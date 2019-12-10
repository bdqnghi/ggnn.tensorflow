void onOK() {
    if (mavenTextField.getText().isEmpty()) {
        DependencyBank.mavenCentral = "mavenCentral()";
    } else {
        DependencyBank.mavenCentral = "maven { url \"" + mavenTextField.getText() + "\" }";
    }
    setVisible(false);
}
