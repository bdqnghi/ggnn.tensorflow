private void initializeComponents(String chartTitle) {
    JPanel contentPanel = getContentPanel();
    {
        chart = new Chart(chartTitle) {

            public void pointsChanged() {
                value.setTimeline(chart.getValuesX());
                value.setScaling(chart.getValuesY());
            }
        };
        chart.setPreferredSize(new Dimension(150, 62));
        contentPanel.add(chart, new GridBagConstraints(0, 0, 1, 1, 0, 0, GridBagConstraints.WEST, GridBagConstraints.BOTH, new Insets(0, 0, 0, 0), 0, 0));
    }
    {
        expandButton = new JButton("+");
        expandButton.setBorder(BorderFactory.createEmptyBorder(4, 10, 4, 10));
        contentPanel.add(expandButton, new GridBagConstraints(1, 0, 1, 1, 1, 0, GridBagConstraints.NORTHWEST, GridBagConstraints.NONE, new Insets(0, 6, 0, 0), 0, 0));
    }
}
