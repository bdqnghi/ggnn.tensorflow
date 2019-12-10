public void actionPerformed(ActionEvent event) {
    chart.setExpanded(!chart.isExpanded());
    boolean expanded = chart.isExpanded();
    GridBagLayout layout = (GridBagLayout) getContentPanel().getLayout();
    GridBagConstraints chartConstraints = layout.getConstraints(chart);
    GridBagConstraints expandButtonConstraints = layout.getConstraints(expandButton);
    if (expanded) {
        chart.setPreferredSize(new Dimension(150, 200));
        expandButton.setText("-");
        chartConstraints.weightx = 1;
        expandButtonConstraints.weightx = 0;
    } else {
        chart.setPreferredSize(new Dimension(150, 62));
        expandButton.setText("+");
        chartConstraints.weightx = 0;
        expandButtonConstraints.weightx = 1;
    }
    layout.setConstraints(chart, chartConstraints);
    layout.setConstraints(expandButton, expandButtonConstraints);
    chart.revalidate();
}
