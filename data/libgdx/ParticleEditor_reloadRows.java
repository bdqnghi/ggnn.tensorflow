void reloadRows() {
    EventQueue.invokeLater(new Runnable() {

        public void run() {
            editRowsPanel.removeAll();
            addEditorRow(new NumericPanel(pixelsPerMeter, "Pixels per meter", ""));
            addEditorRow(new NumericPanel(zoomLevel, "Zoom level", ""));
            addEditorRow(new NumericPanel(deltaMultiplier, "Delta multiplier", ""));
            addEditorRow(new GradientPanel(backgroundColor, "Background color", "", true));
            rowsPanel.removeAll();
            ParticleEmitter emitter = getEmitter();
            addRow(new ImagePanel(ParticleEditor.this, "Image", ""));
            addRow(new CountPanel(ParticleEditor.this, "Count", "Min number of particles at all times, max number of particles allowed."));
            addRow(new RangedNumericPanel(emitter.getDelay(), "Delay", "Time from beginning of effect to emission start, in milliseconds."));
            addRow(new RangedNumericPanel(emitter.getDuration(), "Duration", "Time particles will be emitted, in milliseconds."));
            addRow(new ScaledNumericPanel(emitter.getEmission(), "Duration", "Emission", "Number of particles emitted per second."));
            addRow(new ScaledNumericPanel(emitter.getLife(), "Duration", "Life", "Time particles will live, in milliseconds."));
            addRow(new ScaledNumericPanel(emitter.getLifeOffset(), "Duration", "Life Offset", "Particle starting life consumed, in milliseconds."));
            addRow(new RangedNumericPanel(emitter.getXOffsetValue(), "X Offset", "Amount to offset a particle's starting X location, in world units."));
            addRow(new RangedNumericPanel(emitter.getYOffsetValue(), "Y Offset", "Amount to offset a particle's starting Y location, in world units."));
            addRow(new SpawnPanel(ParticleEditor.this, emitter.getSpawnShape(), "Spawn", "Shape used to spawn particles."));
            addRow(new ScaledNumericPanel(emitter.getSpawnWidth(), "Duration", "Spawn Width", "Width of the spawn shape, in world units."));
            addRow(new ScaledNumericPanel(emitter.getSpawnHeight(), "Duration", "Spawn Height", "Height of the spawn shape, in world units."));
            addRow(new ScaledNumericPanel(emitter.getScale(), "Life", "Size", "Particle size, in world units."));
            addRow(new ScaledNumericPanel(emitter.getVelocity(), "Life", "Velocity", "Particle speed, in world units per second."));
            addRow(new ScaledNumericPanel(emitter.getAngle(), "Life", "Angle", "Particle emission angle, in degrees."));
            addRow(new ScaledNumericPanel(emitter.getRotation(), "Life", "Rotation", "Particle rotation, in degrees."));
            addRow(new ScaledNumericPanel(emitter.getWind(), "Life", "Wind", "Wind strength, in world units per second."));
            addRow(new ScaledNumericPanel(emitter.getGravity(), "Life", "Gravity", "Gravity strength, in world units per second."));
            addRow(new GradientPanel(emitter.getTint(), "Tint", "", false));
            addRow(new PercentagePanel(emitter.getTransparency(), "Life", "Transparency", ""));
            addRow(new OptionsPanel(ParticleEditor.this, "Options", ""));
            for (Component component : rowsPanel.getComponents()) if (component instanceof EditorPanel)
                ((EditorPanel) component).update(ParticleEditor.this);
            rowsPanel.repaint();
        }
    });
}
