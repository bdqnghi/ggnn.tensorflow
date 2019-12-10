protected void loadResource() {
    File file = editor.showFileLoadDialog();
    if (file != null) {
        try {
            String resource = file.getAbsolutePath();
            ModelLoader modelLoader = null;
            if (resource.endsWith(".obj")) {
                modelLoader = new ObjLoader(new AbsoluteFileHandleResolver());
            } else if (resource.endsWith(".g3dj")) {
                modelLoader = new G3dModelLoader(new JsonReader(), new AbsoluteFileHandleResolver());
            } else if (resource.endsWith(".g3db")) {
                modelLoader = new G3dModelLoader(new UBJsonReader(), new AbsoluteFileHandleResolver());
            } else
                throw new Exception();
            listener.onResourceLoaded(editor.load(resource, Model.class, modelLoader, null));
        } catch (Exception ex) {
            System.out.println("Error loading model: " + file.getAbsolutePath());
            ex.printStackTrace();
            JOptionPane.showMessageDialog(getParent(), "Error opening effect.");
            return;
        }
    }
}
