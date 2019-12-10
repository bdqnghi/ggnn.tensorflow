private void parseMeshes(ModelData model, JsonValue json) {
    JsonValue meshes = json.get("meshes");
    if (meshes != null) {
        model.meshes.ensureCapacity(meshes.size);
        for (JsonValue mesh = meshes.child; mesh != null; mesh = mesh.next) {
            ModelMesh jsonMesh = new ModelMesh();
            String id = mesh.getString("id", "");
            jsonMesh.id = id;
            JsonValue attributes = mesh.require("attributes");
            jsonMesh.attributes = parseAttributes(attributes);
            jsonMesh.vertices = mesh.require("vertices").asFloatArray();
            JsonValue meshParts = mesh.require("parts");
            Array<ModelMeshPart> parts = new Array<ModelMeshPart>();
            for (JsonValue meshPart = meshParts.child; meshPart != null; meshPart = meshPart.next) {
                ModelMeshPart jsonPart = new ModelMeshPart();
                String partId = meshPart.getString("id", null);
                if (partId == null) {
                    throw new GdxRuntimeException("Not id given for mesh part");
                }
                for (ModelMeshPart other : parts) {
                    if (other.id.equals(partId)) {
                        throw new GdxRuntimeException("Mesh part with id '" + partId + "' already in defined");
                    }
                }
                jsonPart.id = partId;
                String type = meshPart.getString("type", null);
                if (type == null) {
                    throw new GdxRuntimeException("No primitive type given for mesh part '" + partId + "'");
                }
                jsonPart.primitiveType = parseType(type);
                jsonPart.indices = meshPart.require("indices").asShortArray();
                parts.add(jsonPart);
            }
            jsonMesh.parts = parts.toArray(ModelMeshPart.class);
            model.meshes.add(jsonMesh);
        }
    }
}
