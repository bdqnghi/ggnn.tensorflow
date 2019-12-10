private int allocateProgramId(WebGLProgram program) {
    int id = nextProgramId++;
    programs.put(id, program);
    return id;
}
