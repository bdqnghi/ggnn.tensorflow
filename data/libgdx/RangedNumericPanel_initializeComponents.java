@Override
protected void initializeComponents() {
    super.initializeComponents();
    JPanel contentPanel = getContentPanel();
    {
        label = new JLabel("Value:");
        contentPanel.add(label, new GridBagConstraints(2, 2, 1, 1, 0, 0, GridBagConstraints.EAST, GridBagConstraints.NONE, new Insets(0, 0, 0, 6), 0, 0));
    }
    {
        minSlider = new Slider(0, -99999, 99999, 1);
        contentPanel.add(minSlider, new GridBagConstraints(3, 2, 1, 1, 0, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 0, 0, 0), 0, 0));
    }
    {
        maxSlider = new Slider(0, -99999, 99999, 1);
        contentPanel.add(maxSlider, new GridBagConstraints(4, 2, 1, 1, 0, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 6, 0, 0), 0, 0));
    }
    {
        rangeButton = new JButton("<");
        rangeButton.setBorder(BorderFactory.createEmptyBorder(6, 6, 6, 6));
        contentPanel.add(rangeButton, new GridBagConstraints(5, 2, 1, 1, 1.0, 0, GridBagConstraints.WEST, GridBagConstraints.NONE, new Insets(0, 1, 0, 0), 0, 0));
    }
    minSlider.addChangeListener(new ChangeListener() {

        public void stateChanged(ChangeEvent event) {
            RangedNumericPanel.this.value.setLowMin((Float) minSlider.getValue());
            if (!maxSlider.isVisible())
                RangedNumericPanel.this.value.setLowMax((Float) minSlider.getValue());
        }
    });
    maxSlider.addChangeListener(new ChangeListener() {

        public void stateChanged(ChangeEvent event) {
            RangedNumericPanel.this.value.setLowMax((Float) maxSlider.getValue());
        }
    });
    rangeButton.addActionListener(new ActionListener() {

        public void actionPerformed(ActionEvent event) {
            boolean visible = !maxSlider.isVisible();
            maxSlider.setVisible(visible);
            rangeButton.setText(visible ? "<" : ">");
            Slider slider = visible ? maxSlider : minSlider;
            RangedNumericPanel.this.value.setLowMax((Float) slider.getValue());
        }
    });
}
