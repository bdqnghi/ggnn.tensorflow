void reloadRows() {
    EventQueue.invokeLater(new Runnable() {

        public void run() {
            // Ensure no listener is left watching for events
            EventManager.get().clear();
            // Clear
            editorPropertiesPanel.removeAll();
            influencerBox.removeAllItems();
            controllerPropertiesPanel.removeAll();
            // Editor props
            addRow(editorPropertiesPanel, new NumericPanel(FlameMain.this, fovValue, "Field of View", ""));
            addRow(editorPropertiesPanel, new NumericPanel(FlameMain.this, deltaMultiplier, "Delta multiplier", ""));
            addRow(editorPropertiesPanel, new GradientPanel(FlameMain.this, backgroundColor, "Background color", "", true));
            addRow(editorPropertiesPanel, new DrawPanel(FlameMain.this, "Draw", ""));
            addRow(editorPropertiesPanel, new TextureLoaderPanel(FlameMain.this, "Texture", ""));
            addRow(editorPropertiesPanel, new BillboardBatchPanel(FlameMain.this, renderer.billboardBatch), 1, 1);
            editorPropertiesPanel.repaint();
            // Controller props
            ParticleController controller = getEmitter();
            if (controller != null) {
                // Reload available influencers
                DefaultComboBoxModel model = (DefaultComboBoxModel) influencerBox.getModel();
                ControllerType type = getControllerType();
                if (type != null) {
                    for (Object value : type.wrappers) model.addElement(value);
                }
                JPanel panel = null;
                addRow(controllerPropertiesPanel, getPanel(controller.emitter));
                for (int i = 0, c = controller.influencers.size; i < c; ++i) {
                    Influencer influencer = (Influencer) controller.influencers.get(i);
                    panel = getPanel(influencer);
                    if (panel != null)
                        addRow(controllerPropertiesPanel, panel, 1, i == c - 1 ? 1 : 0);
                }
                for (Component component : controllerPropertiesPanel.getComponents()) if (component instanceof EditorPanel)
                    ((EditorPanel) component).update(FlameMain.this);
            }
            controllerPropertiesPanel.repaint();
        }
    });
}
