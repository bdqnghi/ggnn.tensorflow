protected void initializeComponents() {
    super.initializeComponents();
    pointSpawnShapeValue = new PointSpawnShapeValue();
    lineSpawnShapeValue = new LineSpawnShapeValue();
    rectangleSpawnShapeValue = new RectangleSpawnShapeValue();
    ellipseSpawnShapeValue = new EllipseSpawnShapeValue();
    cylinderSpawnShapeValue = new CylinderSpawnShapeValue();
    meshSpawnShapeValue = new UnweightedMeshSpawnShapeValue();
    weightMeshSpawnShapeValue = new WeightMeshSpawnShapeValue();
    lineSpawnShapeValue.setDimensions(6, 6, 6);
    rectangleSpawnShapeValue.setDimensions(6, 6, 6);
    ellipseSpawnShapeValue.setDimensions(6, 6, 6);
    cylinderSpawnShapeValue.setDimensions(6, 6, 6);
    pointSpawnShapeValue.setActive(true);
    lineSpawnShapeValue.setActive(true);
    rectangleSpawnShapeValue.setActive(true);
    ellipseSpawnShapeValue.setActive(true);
    cylinderSpawnShapeValue.setActive(true);
    meshSpawnShapeValue.setActive(true);
    weightMeshSpawnShapeValue.setActive(true);
    Model defaultModel = editor.assetManager.get(FlameMain.DEFAULT_MODEL_PARTICLE);
    Array<Model> models = new Array<Model>();
    models.add(defaultModel);
    int i = 0;
    JPanel panel = new JPanel(new GridBagLayout());
    EditorPanel.addContent(panel, i, 0, new JLabel("Shape"), false, GridBagConstraints.WEST, GridBagConstraints.NONE, 0, 0);
    EditorPanel.addContent(panel, i++, 1, shapeCombo = new JComboBox(new DefaultComboBoxModel(spawnShapes)), false, GridBagConstraints.WEST, GridBagConstraints.NONE, 1, 0);
    EditorPanel.addContent(panel, i, 0, edgesLabel = new JLabel("Edges"), false, GridBagConstraints.WEST, GridBagConstraints.NONE, 0, 0);
    EditorPanel.addContent(panel, i++, 1, edgesCheckbox = new JCheckBox(), false, GridBagConstraints.WEST, GridBagConstraints.NONE, 0, 0);
    EditorPanel.addContent(panel, i, 0, sideLabel = new JLabel("Side"), false, GridBagConstraints.WEST, GridBagConstraints.NONE, 0, 0);
    EditorPanel.addContent(panel, i++, 1, sideCombo = new JComboBox(new DefaultComboBoxModel(SpawnSide.values())), false, GridBagConstraints.WEST, GridBagConstraints.NONE, 1, 0);
    edgesCheckbox.setHorizontalTextPosition(SwingConstants.LEFT);
    i = 0;
    addContent(i++, 0, panel, GridBagConstraints.WEST, GridBagConstraints.HORIZONTAL);
    addContent(i++, 0, meshPanel = new TemplatePickerPanel<Model>(editor, models, this, Model.class, new LoaderButton.ModelLoaderButton(editor), true, false), false, GridBagConstraints.WEST, GridBagConstraints.NONE);
    addContent(i++, 0, xPanel = new RangedNumericPanel(editor, pointSpawnShapeValue.xOffsetValue, "X Offset", "Amount to offset a particle's starting X location, in world units.", false));
    addContent(i++, 0, yPanel = new RangedNumericPanel(editor, pointSpawnShapeValue.yOffsetValue, "Y Offset", "Amount to offset a particle's starting Y location, in world units.", false));
    addContent(i++, 0, zPanel = new RangedNumericPanel(editor, pointSpawnShapeValue.zOffsetValue, "Z Offset", "Amount to offset a particle's starting Z location, in world units.", false));
    addContent(i++, 0, widthPanel = new ScaledNumericPanel(editor, pointSpawnShapeValue.getSpawnWidth(), "Duration", "Spawn Width", "Width of the spawn shape, in world units.", true));
    addContent(i++, 0, heightPanel = new ScaledNumericPanel(editor, pointSpawnShapeValue.getSpawnWidth(), "Duration", "Spawn Height", "Height of the spawn shape, in world units.", true));
    addContent(i++, 0, depthPanel = new ScaledNumericPanel(editor, pointSpawnShapeValue.getSpawnWidth(), "Duration", "Spawn Depth", "Depth of the spawn shape, in world units.", true), false);
    meshPanel.setIsAlwayShown(true);
    onTemplateChecked(defaultModel, true);
    shapeCombo.addActionListener(new ActionListener() {

        public void actionPerformed(ActionEvent event) {
            String shape = (String) shapeCombo.getSelectedItem();
            if (shape == SPAWN_SHAPE_POINT) {
                setPrimitiveSpawnShape(pointSpawnShapeValue, false, null);
            } else if (shape == SPAWN_SHAPE_LINE) {
                setPrimitiveSpawnShape(lineSpawnShapeValue, false, null);
            } else if (shape == SPAWN_SHAPE_RECTANGLE) {
                setPrimitiveSpawnShape(rectangleSpawnShapeValue, true, null);
            } else if (shape == SPAWN_SHAPE_ELLIPSE) {
                setPrimitiveSpawnShape(ellipseSpawnShapeValue, true, ellipseSpawnShapeValue.getSide());
            } else if (shape == SPAWN_SHAPE_CYLINDER) {
                setPrimitiveSpawnShape(cylinderSpawnShapeValue, true, null);
            } else if (shape == SPAWN_SHAPE_MESH) {
                setMeshSpawnShape(meshSpawnShapeValue);
            } else if (shape == SPAWN_SHAPE_WEIGHT_MESH) {
                setMeshSpawnShape(weightMeshSpawnShapeValue);
            }
            editor.restart();
        }
    });
    edgesCheckbox.addActionListener(new ActionListener() {

        public void actionPerformed(ActionEvent event) {
            SpawnInfluencer influencer = (SpawnInfluencer) editor.getEmitter().findInfluencer(SpawnInfluencer.class);
            PrimitiveSpawnShapeValue shapeValue = (PrimitiveSpawnShapeValue) influencer.spawnShapeValue;
            shapeValue.setEdges(edgesCheckbox.isSelected());
            setEdgesVisible(true);
        }
    });
    sideCombo.addActionListener(new ActionListener() {

        public void actionPerformed(ActionEvent event) {
            SpawnSide side = (SpawnSide) sideCombo.getSelectedItem();
            SpawnInfluencer influencer = (SpawnInfluencer) editor.getEmitter().findInfluencer(SpawnInfluencer.class);
            EllipseSpawnShapeValue shapeValue = (EllipseSpawnShapeValue) influencer.spawnShapeValue;
            shapeValue.setSide(side);
        }
    });
}
