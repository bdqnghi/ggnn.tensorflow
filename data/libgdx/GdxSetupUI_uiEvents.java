private void uiEvents() {
    destinationButton.addActionListener(new ActionListener() {

        public void actionPerformed(ActionEvent e) {
            File path = getDirectory();
            if (path != null) {
                destinationText.setText(path.getAbsolutePath());
            }
        }
    });
    sdkLocationButton.addActionListener(new ActionListener() {

        @Override
        public void actionPerformed(ActionEvent e) {
            File path = getDirectory();
            if (path != null) {
                sdkLocationText.setText(path.getAbsolutePath());
            }
        }
    });
    showMoreExtensionsButton.addActionListener(new ActionListener() {

        public void actionPerformed(ActionEvent e) {
            externalExtensionsDialog.showDialog();
        }
    });
}
