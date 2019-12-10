protected void initializeComponents() {
    super.initializeComponents();
    JPanel contentPanel = getContentPanel();
    {
        gradientEditor = new GradientEditor() {

            public void handleSelected(Color color) {
                GradientPanel.this.setColor(color);
            }
        };
        contentPanel.add(gradientEditor, new GridBagConstraints(0, 1, 3, 1, 1.0, 0.0, GridBagConstraints.CENTER, GridBagConstraints.HORIZONTAL, new Insets(0, 0, 6, 0), 0, 10));
    }
    {
        hueSlider = new ColorSlider(new Color[] { Color.red, Color.yellow, Color.green, Color.cyan, Color.blue, Color.magenta, Color.red }) {

            protected void colorPicked() {
                saturationSlider.setColors(new Color[] { new Color(Color.HSBtoRGB(getPercentage(), 1, 1)), Color.white });
                updateColor();
            }
        };
        contentPanel.add(hueSlider, new GridBagConstraints(1, 2, 2, 1, 1.0, 0.0, GridBagConstraints.CENTER, GridBagConstraints.HORIZONTAL, new Insets(0, 0, 6, 0), 0, 0));
    }
    {
        saturationSlider = new ColorSlider(new Color[] { Color.red, Color.white }) {

            protected void colorPicked() {
                updateColor();
            }
        };
        contentPanel.add(saturationSlider, new GridBagConstraints(1, 3, 1, 1, 1.0, 0.0, GridBagConstraints.CENTER, GridBagConstraints.HORIZONTAL, new Insets(0, 0, 0, 6), 0, 0));
    }
    {
        lightnessSlider = new ColorSlider(new Color[0]) {

            protected void colorPicked() {
                updateColor();
            }
        };
        contentPanel.add(lightnessSlider, new GridBagConstraints(2, 3, 1, 1, 1, 0.0, GridBagConstraints.CENTER, GridBagConstraints.HORIZONTAL, new Insets(0, 0, 0, 0), 0, 0));
    }
    {
        colorPanel = new JPanel() {

            public Dimension getPreferredSize() {
                Dimension size = super.getPreferredSize();
                size.width = 52;
                return size;
            }
        };
        contentPanel.add(colorPanel, new GridBagConstraints(0, 2, 1, 2, 0.0, 0.0, GridBagConstraints.CENTER, GridBagConstraints.BOTH, new Insets(3, 0, 0, 6), 0, 0));
    }
    colorPanel.addMouseListener(new MouseAdapter() {

        public void mouseClicked(MouseEvent e) {
            Color color = JColorChooser.showDialog(colorPanel, "Set Color", colorPanel.getBackground());
            if (color != null)
                setColor(color);
        }
    });
    colorPanel.setBorder(BorderFactory.createMatteBorder(1, 1, 1, 1, Color.black));
}
