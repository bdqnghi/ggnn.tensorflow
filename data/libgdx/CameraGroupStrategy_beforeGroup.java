@Override
public void beforeGroup(int group, Array<Decal> contents) {
    if (group == GROUP_BLEND) {
        Gdx.gl.glEnable(GL20.GL_BLEND);
        contents.sort(cameraSorter);
    } else {
        for (int i = 0, n = contents.size; i < n; i++) {
            Decal decal = contents.get(i);
            Array<Decal> materialGroup = materialGroups.get(decal.material);
            if (materialGroup == null) {
                materialGroup = arrayPool.obtain();
                materialGroup.clear();
                usedArrays.add(materialGroup);
                materialGroups.put(decal.material, materialGroup);
            }
            materialGroup.add(decal);
        }
        contents.clear();
        for (Array<Decal> materialGroup : materialGroups.values()) {
            contents.addAll(materialGroup);
        }
        materialGroups.clear();
        arrayPool.freeAll(usedArrays);
        usedArrays.clear();
    }
}
