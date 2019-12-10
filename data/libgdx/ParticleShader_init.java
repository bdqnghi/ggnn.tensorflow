@Override
public void init() {
    final ShaderProgram program = this.program;
    this.program = null;
    init(program, renderable);
    renderable = null;
}
