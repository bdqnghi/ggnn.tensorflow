public static void main(String[] args) throws Exception {
    BuildTarget win32 = BuildTarget.newDefaultTarget(TargetOs.Windows, false);
    BuildTarget win64 = BuildTarget.newDefaultTarget(TargetOs.Windows, true);
    BuildTarget lin32 = BuildTarget.newDefaultTarget(TargetOs.Linux, false);
    BuildTarget lin64 = BuildTarget.newDefaultTarget(TargetOs.Linux, true);
    BuildTarget android = BuildTarget.newDefaultTarget(TargetOs.Android, false);
    BuildTarget mac32 = BuildTarget.newDefaultTarget(TargetOs.MacOsX, false);
    BuildTarget mac64 = BuildTarget.newDefaultTarget(TargetOs.MacOsX, true);
    BuildTarget ios = BuildTarget.newDefaultTarget(TargetOs.IOS, false);
    new NativeCodeGenerator().generate("src", "bin" + File.pathSeparator + "../../../gdx/bin", "jni");
    new AntScriptGenerator().generate(new BuildConfig("gdx-box2d"), win32, win64, lin32, lin64, mac32, mac64, android, ios);
}
