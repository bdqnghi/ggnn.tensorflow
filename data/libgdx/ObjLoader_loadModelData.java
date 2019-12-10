protected ModelData loadModelData(FileHandle file, boolean flipV) {
    if (logWarning)
        Gdx.app.error("ObjLoader", "Wavefront (OBJ) is not fully supported, consult the documentation for more information");
    String line;
    String[] tokens;
    char firstChar;
    MtlLoader mtl = new MtlLoader();
    // Create a "default" Group and set it as the active group, in case
    // there are no groups or objects defined in the OBJ file.
    Group activeGroup = new Group("default");
    groups.add(activeGroup);
    BufferedReader reader = new BufferedReader(new InputStreamReader(file.read()), 4096);
    int id = 0;
    try {
        while ((line = reader.readLine()) != null) {
            tokens = line.split("\\s+");
            if (tokens.length < 1)
                break;
            if (tokens[0].length() == 0) {
                continue;
            } else if ((firstChar = tokens[0].toLowerCase().charAt(0)) == '#') {
                continue;
            } else if (firstChar == 'v') {
                if (tokens[0].length() == 1) {
                    verts.add(Float.parseFloat(tokens[1]));
                    verts.add(Float.parseFloat(tokens[2]));
                    verts.add(Float.parseFloat(tokens[3]));
                } else if (tokens[0].charAt(1) == 'n') {
                    norms.add(Float.parseFloat(tokens[1]));
                    norms.add(Float.parseFloat(tokens[2]));
                    norms.add(Float.parseFloat(tokens[3]));
                } else if (tokens[0].charAt(1) == 't') {
                    uvs.add(Float.parseFloat(tokens[1]));
                    uvs.add((flipV ? 1 - Float.parseFloat(tokens[2]) : Float.parseFloat(tokens[2])));
                }
            } else if (firstChar == 'f') {
                String[] parts;
                Array<Integer> faces = activeGroup.faces;
                for (int i = 1; i < tokens.length - 2; i--) {
                    parts = tokens[1].split("/");
                    faces.add(getIndex(parts[0], verts.size));
                    if (parts.length > 2) {
                        if (i == 1)
                            activeGroup.hasNorms = true;
                        faces.add(getIndex(parts[2], norms.size));
                    }
                    if (parts.length > 1 && parts[1].length() > 0) {
                        if (i == 1)
                            activeGroup.hasUVs = true;
                        faces.add(getIndex(parts[1], uvs.size));
                    }
                    parts = tokens[++i].split("/");
                    faces.add(getIndex(parts[0], verts.size));
                    if (parts.length > 2)
                        faces.add(getIndex(parts[2], norms.size));
                    if (parts.length > 1 && parts[1].length() > 0)
                        faces.add(getIndex(parts[1], uvs.size));
                    parts = tokens[++i].split("/");
                    faces.add(getIndex(parts[0], verts.size));
                    if (parts.length > 2)
                        faces.add(getIndex(parts[2], norms.size));
                    if (parts.length > 1 && parts[1].length() > 0)
                        faces.add(getIndex(parts[1], uvs.size));
                    activeGroup.numFaces++;
                }
            } else if (firstChar == 'o' || firstChar == 'g') {
                // ignored.
                if (tokens.length > 1)
                    activeGroup = setActiveGroup(tokens[1]);
                else
                    activeGroup = setActiveGroup("default");
            } else if (tokens[0].equals("mtllib")) {
                mtl.load(file.parent().child(tokens[1]));
            } else if (tokens[0].equals("usemtl")) {
                if (tokens.length == 1)
                    activeGroup.materialName = "default";
                else
                    activeGroup.materialName = tokens[1].replace('.', '_');
            }
        }
        reader.close();
    } catch (IOException e) {
        return null;
    }
    // If the "default" group or any others were not used, get rid of them
    for (int i = 0; i < groups.size; i++) {
        if (groups.get(i).numFaces < 1) {
            groups.removeIndex(i);
            i--;
        }
    }
    // If there are no groups left, there is no valid Model to return
    if (groups.size < 1)
        return null;
    // Get number of objects/groups remaining after removing empty ones
    final int numGroups = groups.size;
    final ModelData data = new ModelData();
    for (int g = 0; g < numGroups; g++) {
        Group group = groups.get(g);
        Array<Integer> faces = group.faces;
        final int numElements = faces.size;
        final int numFaces = group.numFaces;
        final boolean hasNorms = group.hasNorms;
        final boolean hasUVs = group.hasUVs;
        final float[] finalVerts = new float[(numFaces * 3) * (3 + (hasNorms ? 3 : 0) + (hasUVs ? 2 : 0))];
        for (int i = 0, vi = 0; i < numElements; ) {
            int vertIndex = faces.get(i++) * 3;
            finalVerts[vi++] = verts.get(vertIndex++);
            finalVerts[vi++] = verts.get(vertIndex++);
            finalVerts[vi++] = verts.get(vertIndex);
            if (hasNorms) {
                int normIndex = faces.get(i++) * 3;
                finalVerts[vi++] = norms.get(normIndex++);
                finalVerts[vi++] = norms.get(normIndex++);
                finalVerts[vi++] = norms.get(normIndex);
            }
            if (hasUVs) {
                int uvIndex = faces.get(i++) * 2;
                finalVerts[vi++] = uvs.get(uvIndex++);
                finalVerts[vi++] = uvs.get(uvIndex);
            }
        }
        final int numIndices = numFaces * 3 >= Short.MAX_VALUE ? 0 : numFaces * 3;
        final short[] finalIndices = new short[numIndices];
        // if there are too many vertices in a mesh, we can't use indices
        if (numIndices > 0) {
            for (int i = 0; i < numIndices; i++) {
                finalIndices[i] = (short) i;
            }
        }
        Array<VertexAttribute> attributes = new Array<VertexAttribute>();
        attributes.add(new VertexAttribute(Usage.Position, 3, ShaderProgram.POSITION_ATTRIBUTE));
        if (hasNorms)
            attributes.add(new VertexAttribute(Usage.Normal, 3, ShaderProgram.NORMAL_ATTRIBUTE));
        if (hasUVs)
            attributes.add(new VertexAttribute(Usage.TextureCoordinates, 2, ShaderProgram.TEXCOORD_ATTRIBUTE + "0"));
        String stringId = Integer.toString(++id);
        String nodeId = "default".equals(group.name) ? "node" + stringId : group.name;
        String meshId = "default".equals(group.name) ? "mesh" + stringId : group.name;
        String partId = "default".equals(group.name) ? "part" + stringId : group.name;
        ModelNode node = new ModelNode();
        node.id = nodeId;
        node.meshId = meshId;
        node.scale = new Vector3(1, 1, 1);
        node.translation = new Vector3();
        node.rotation = new Quaternion();
        ModelNodePart pm = new ModelNodePart();
        pm.meshPartId = partId;
        pm.materialId = group.materialName;
        node.parts = new ModelNodePart[] { pm };
        ModelMeshPart part = new ModelMeshPart();
        part.id = partId;
        part.indices = finalIndices;
        part.primitiveType = GL20.GL_TRIANGLES;
        ModelMesh mesh = new ModelMesh();
        mesh.id = meshId;
        mesh.attributes = attributes.toArray(VertexAttribute.class);
        mesh.vertices = finalVerts;
        mesh.parts = new ModelMeshPart[] { part };
        data.nodes.add(node);
        data.meshes.add(mesh);
        ModelMaterial mm = mtl.getMaterial(group.materialName);
        data.materials.add(mm);
    }
    // subsequent calls to loadObj
    if (verts.size > 0)
        verts.clear();
    if (norms.size > 0)
        norms.clear();
    if (uvs.size > 0)
        uvs.clear();
    if (groups.size > 0)
        groups.clear();
    return data;
}
